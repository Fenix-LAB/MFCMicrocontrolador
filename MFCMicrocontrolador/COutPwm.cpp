// COutPwm.cpp: archivo de implementación
//

#include "pch.h"
#include "MFCMicrocontrolador.h"
#include "COutPwm.h"
#include "afxdialogex.h"
#include "CEsp32.h";
#include <Windows.h>

CEsp32 PWM;

// Cuadro de diálogo de COutPwm

IMPLEMENT_DYNAMIC(COutPwm, CDialogEx)

COutPwm::COutPwm(CWnd* pParent /*= nullptr*/)
	: CDialogEx(IDD_DLG_PWM, pParent)
{

}

COutPwm::~COutPwm()
{
}

void COutPwm::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_PROG_BRILLO, m_ctrlProgresBrillo);
	DDX_Control(pDX, IDC_SLD_BRILLO, m_ctrlSliderBrillo);
}


BEGIN_MESSAGE_MAP(COutPwm, CDialogEx)
	ON_WM_HSCROLL()
END_MESSAGE_MAP()


// Controladores de mensajes de COutPwm


BOOL COutPwm::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	m_ctrlProgresBrillo.SetRange(0, 254);
	m_ctrlSliderBrillo.SetRange(0, 254, false);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPCIÓN: las páginas de propiedades OCX deben devolver FALSE
}


void COutPwm::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{

	if (pScrollBar == (CScrollBar*)&m_ctrlSliderBrillo) {
		int pos;
		pos = m_ctrlSliderBrillo.GetPos();
		m_ctrlProgresBrillo.SetPos(pos);

		Sleep(20);
		PWM.SetPWM(pos);

		UpdateData(false);
	}

	CDialogEx::OnHScroll(nSBCode, nPos, pScrollBar);
}
