#pragma once


// Cuadro de diálogo de COutPwm

class COutPwm : public CDialogEx
{
	DECLARE_DYNAMIC(COutPwm)

public:
	COutPwm(CWnd* pParent = nullptr);   // Constructor estándar
	virtual ~COutPwm();

// Datos del cuadro de diálogo
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_PWM };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Compatibilidad con DDX/DDV

	DECLARE_MESSAGE_MAP()
private:
	CProgressCtrl m_ctrlProgresBrillo;
	CSliderCtrl m_ctrlSliderBrillo;
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
};
