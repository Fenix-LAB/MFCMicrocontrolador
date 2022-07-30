
// MFCMicrocontroladorDlg.h: archivo de encabezado
//

#pragma once


// Cuadro de diálogo de CMFCMicrocontroladorDlg
class CMFCMicrocontroladorDlg : public CDialogEx
{
// Construcción
public:
	CMFCMicrocontroladorDlg(CWnd* pParent = nullptr);	// Constructor estándar

// Datos del cuadro de diálogo
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCMICROCONTROLADOR_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// Compatibilidad con DDX/DDV


// Implementación
protected:
	HICON m_hIcon;

	// Funciones de asignación de mensajes generadas
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnOn();
	afx_msg void OnBnClickedBtnOff();
	afx_msg void OnWindowsEncenderled();
	afx_msg void OnAyudaAcercade();
	afx_msg void OnAyudaSalir();
	afx_msg void OnWindowsSalidapwm();
	afx_msg void OnWindowsServomotor();
	afx_msg void OnEsp32Sensordemovimiento();
	afx_msg void OnAyudaComprobarconexion();
};
