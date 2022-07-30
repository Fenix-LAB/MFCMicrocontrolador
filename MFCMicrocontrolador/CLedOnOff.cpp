// CLedOnOff.cpp: archivo de implementación
//

#include "pch.h"
#include "MFCMicrocontrolador.h"
#include "CLedOnOff.h"
#include "afxdialogex.h"

#include "CEsp32.h";

CEsp32 LED;

// Cuadro de diálogo de CLedOnOff

IMPLEMENT_DYNAMIC(CLedOnOff, CDialogEx)

CLedOnOff::CLedOnOff(CWnd* pParent /*= nullptr*/)
	: CDialogEx(IDD_DLG_LEDON, pParent)
{

}

CLedOnOff::~CLedOnOff()
{
}

void CLedOnOff::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CLedOnOff, CDialogEx)
	ON_BN_CLICKED(IDC_BTN_ON, &CLedOnOff::OnBnClickedBtnOn)
	ON_BN_CLICKED(IDC_BTN_OFF, &CLedOnOff::OnBnClickedBtnOff)
END_MESSAGE_MAP()


// Controladores de mensajes de CLedOnOff


void CLedOnOff::OnBnClickedBtnOn()
{
	LED.OnLed();

	SetDlgItemText(IDC_EDT_LED, _T("EL LED se a encendido"));

	UpdateData(false);
}


void CLedOnOff::OnBnClickedBtnOff()
{
	LED.OffLed();

	SetDlgItemText(IDC_EDT_LED, _T("EL LED se a apagado"));

	UpdateData(false);
}
