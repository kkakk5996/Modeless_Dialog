// CSonDlg.cpp: 구현 파일
//

#include "pch.h"
#include "CModaless.h"
#include "afxdialogex.h"
#include "CSonDlg.h"


// CSonDlg 대화 상자

IMPLEMENT_DYNAMIC(CSonDlg, CDialogEx)

CSonDlg::CSonDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, m_Str(_T(""))
{

}

CSonDlg::~CSonDlg()
{
}

void CSonDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_Str);
}


BEGIN_MESSAGE_MAP(CSonDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CSonDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CSonDlg 메시지 처리기

#include "CModalessDlg.h"
void CSonDlg::OnBnClickedButton1()
{
	CCModalessDlg* mDlg = (CCModalessDlg*)GetParent();
	UpdateData(true);
	mDlg->m_List.AddString(m_Str);
	CDialogEx::OnOK();
}
