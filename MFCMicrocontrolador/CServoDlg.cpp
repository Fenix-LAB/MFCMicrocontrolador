// CServoDlg.cpp: archivo de implementación
//

#include "pch.h"
#include "MFCMicrocontrolador.h"
#include "CServoDlg.h"
#include "afxdialogex.h"
#include "CEsp32.h";

CEsp32 Servo;


// Cuadro de diálogo de CServoDlg

IMPLEMENT_DYNAMIC(CServoDlg, CDialogEx)

CServoDlg::CServoDlg(CWnd* pParent /*= nullptr*/)
	: CDialogEx(IDD_DLG_SERVOM, pParent)
{

}

CServoDlg::~CServoDlg()
{
}

void CServoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_SLD_SERVO, m_SliderServo);
}


BEGIN_MESSAGE_MAP(CServoDlg, CDialogEx)
	ON_WM_HSCROLL()
	ON_BN_CLICKED(IDC_BTN_90, &CServoDlg::OnBnClickedBtn90)
END_MESSAGE_MAP()


// Controladores de mensajes de CServoDlg


BOOL CServoDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	
	m_SliderServo.SetRange(0, 180, false);


	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPCIÓN: las páginas de propiedades OCX deben devolver FALSE
}




void CServoDlg::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
	if (pScrollBar == (CScrollBar*)&m_SliderServo) {
		int pos;
		pos = m_SliderServo.GetPos();

		Sleep(20);
		Servo.SetServo(pos);
	}

	CDialogEx::OnHScroll(nSBCode, nPos, pScrollBar);
}


void CServoDlg::OnBnClickedBtn90()
{
	Servo.SetServo(90);
	m_SliderServo.SetPos(90);
}
