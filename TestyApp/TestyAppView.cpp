
// TestyAppView.cpp : implementation of the CTestyAppView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "TestyApp.h"
#endif

#include "TestyAppDoc.h"
#include "TestyAppView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTestyAppView

IMPLEMENT_DYNCREATE(CTestyAppView, CView)

BEGIN_MESSAGE_MAP(CTestyAppView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CTestyAppView construction/destruction

CTestyAppView::CTestyAppView()
{
	// TODO: add construction code here

}

CTestyAppView::~CTestyAppView()
{
}

BOOL CTestyAppView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CTestyAppView drawing

void CTestyAppView::OnDraw(CDC* /*pDC*/)
{
	CTestyAppDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CTestyAppView printing

BOOL CTestyAppView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CTestyAppView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CTestyAppView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CTestyAppView diagnostics

#ifdef _DEBUG
void CTestyAppView::AssertValid() const
{
	CView::AssertValid();
}

void CTestyAppView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTestyAppDoc* CTestyAppView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTestyAppDoc)));
	return (CTestyAppDoc*)m_pDocument;
}
#endif //_DEBUG


// CTestyAppView message handlers
