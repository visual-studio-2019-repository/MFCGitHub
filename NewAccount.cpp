// NewAccount.cpp : implementation file
//

#include "pch.h"
#include "MFCGitHub.h"
#include "NewAccount.h"
#include "afxdialogex.h"


// NewAccount dialog

IMPLEMENT_DYNAMIC(NewAccount, CDialog)

NewAccount::NewAccount(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_NEW_ACCOUNT, pParent)
{

}

NewAccount::~NewAccount()
{
}

void NewAccount::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(NewAccount, CDialog)
END_MESSAGE_MAP()


// NewAccount message handlers
