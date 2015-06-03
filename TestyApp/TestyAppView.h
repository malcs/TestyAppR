
// TestyAppView.h : interface of the CTestyAppView class
//

#pragma once


class CTestyAppView : public CView
{
protected: // create from serialization only
	CTestyAppView();
	DECLARE_DYNCREATE(CTestyAppView)

// Attributes
public:
	CTestyAppDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CTestyAppView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in TestyAppView.cpp
inline CTestyAppDoc* CTestyAppView::GetDocument() const
   { return reinterpret_cast<CTestyAppDoc*>(m_pDocument); }
#endif

