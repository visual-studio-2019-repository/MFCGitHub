#pragma once


// UserManagement dialog

class UserManagement : public CDialog
{
	DECLARE_DYNAMIC(UserManagement)

public:
	UserManagement(CWnd* pParent = nullptr);   // standard constructor
	virtual ~UserManagement();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_USER_MANEGEMENT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_userList;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedNewAccount();
};
