// CSensorDlg.cpp: archivo de implementación
//

#include "pch.h"
#include "MFCMicrocontrolador.h"
#include "CSensorDlg.h"
#include "afxdialogex.h"

#include "CEsp32.h";

CEsp32 sensor;


// Cuadro de diálogo de CSensorDlg

IMPLEMENT_DYNAMIC(CSensorDlg, CDialogEx)

CSensorDlg::CSensorDlg(CWnd* pParent /*= nullptr*/)
	: CDialogEx(IDD_DLG_SENSOR, pParent)
{
	m_bien.LoadBitmapA(IDB_BIEN);
	m_alerta.LoadBitmapA(IDB_ALE);
}

CSensorDlg::~CSensorDlg()
{
}

void CSensorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_PICALERTA, m_ctrlImagen);
}



BEGIN_MESSAGE_MAP(CSensorDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BTN_CSENSOR, &CSensorDlg::OnBnClickedBtnCsensor)
END_MESSAGE_MAP()


// Controladores de mensajes de CSensorDlg

/*
void CSensorDlg::SensorMovimiento()
{
	if (sensor.GetSensor()) {
		m_ctrlImagen.SetBitmap(m_alerta);
	}
	else {
		m_ctrlImagen.SetBitmap(m_bien);
	}
}
*/

void CSensorDlg::OnBnClickedBtnCsensor()
{
	while (true) {
		if (sensor.GetSensor()) {
			m_ctrlImagen.SetBitmap(m_alerta);
		}
		else {
			m_ctrlImagen.SetBitmap(m_bien);
		}
		Sleep(500);
	}
}
