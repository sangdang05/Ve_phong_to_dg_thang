
// Bai 22_phong to dg thangView.h : interface of the CBai22phongtodgthangView class
//

#pragma once
#include"duong_thang.h"

class CBai22phongtodgthangView : public CView
{
protected: // create from serialization only
	CBai22phongtodgthangView() noexcept;
	DECLARE_DYNCREATE(CBai22phongtodgthangView)

// Attributes
public:
	CBai22phongtodgthangDoc* GetDocument() const;

// Operations
public:
	duong_thang dt1;
	int key;
	CPoint p1, p2;
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
	virtual ~CBai22phongtodgthangView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // debug version in Bai 22_phong to dg thangView.cpp
inline CBai22phongtodgthangDoc* CBai22phongtodgthangView::GetDocument() const
   { return reinterpret_cast<CBai22phongtodgthangDoc*>(m_pDocument); }
#endif

