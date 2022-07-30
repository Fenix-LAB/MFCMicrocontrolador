#pragma once


// Cuadro de diálogo de CServoDlg

class CServoDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CServoDlg)

public:
	CServoDlg(CWnd* pParent = nullptr);   // Constructor estándar
	virtual ~CServoDlg();

// Datos del cuadro de diálogo
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_SERVOM };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Compatibilidad con DDX/DDV

	DECLARE_MESSAGE_MAP()
private:
	CSliderCtrl m_SliderServo;
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnBnClickedBtn90();
};
