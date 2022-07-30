#pragma once


// Cuadro de diálogo de CLedOnOff

class CLedOnOff : public CDialogEx
{
	DECLARE_DYNAMIC(CLedOnOff)

public:
	CLedOnOff(CWnd* pParent = nullptr);   // Constructor estándar
	virtual ~CLedOnOff();

// Datos del cuadro de diálogo
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_LEDON };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Compatibilidad con DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnOn();
	afx_msg void OnBnClickedBtnOff();
};
