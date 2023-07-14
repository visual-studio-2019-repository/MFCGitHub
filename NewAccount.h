#pragma once


// NewAccount dialog

class NewAccount : public CDialog
{
	DECLARE_DYNAMIC(NewAccount)

public:
	NewAccount(CWnd* pParent = nullptr);   // standard constructor
	virtual ~NewAccount();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NEW_ACCOUNT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
