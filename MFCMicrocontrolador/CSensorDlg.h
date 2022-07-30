#pragma once


// Cuadro de diálogo de CSensorDlg

class CSensorDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSensorDlg)

public:
	CSensorDlg(CWnd* pParent = nullptr);   // Constructor estándar
	virtual ~CSensorDlg();

// Datos del cuadro de diálogo
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_SENSOR };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Compatibilidad con DDX/DDV

	DECLARE_MESSAGE_MAP()
private:
	CStatic m_ctrlImagen;
	CBitmap m_bien, m_alerta;
public:
	//void SensorMovimiento();
	afx_msg void OnBnClickedBtnCsensor();
};
