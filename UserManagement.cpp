// UserManagement.cpp : implementation file
//

#include "pch.h"
#include "MFCGitHub.h"
#include "UserManagement.h"
#include "afxdialogex.h"

#include "NewAccount.h"


// UserManagement dialog

IMPLEMENT_DYNAMIC(UserManagement, CDialog)

UserManagement::UserManagement(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_USER_MANEGEMENT, pParent)
{

}

UserManagement::~UserManagement()
{
}

void UserManagement::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_USER_LIST, m_userList);
}


BEGIN_MESSAGE_MAP(UserManagement, CDialog)
	ON_BN_CLICKED(IDC_NEW_ACCOUNT, &UserManagement::OnBnClickedNewAccount)
END_MESSAGE_MAP()


// UserManagement message handlers


BOOL UserManagement::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  Add extra initialization here
	m_userList.SetExtendedStyle(LVS_EX_FULLROWSELECT );
	m_userList.InsertColumn(0, L"Account ID", LVCFMT_LEFT, 180);
	m_userList.InsertColumn(1, L"Access Level", LVCFMT_LEFT, 180);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION: OCX Property Pages should return FALSE
}


void UserManagement::OnBnClickedNewAccount()
{
	NewAccount dlg;
	dlg.DoModal();
}
