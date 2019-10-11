
// Bai 22_phong to dg thangView.cpp : implementation of the CBai22phongtodgthangView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Bai 22_phong to dg thang.h"
#endif

#include "Bai 22_phong to dg thangDoc.h"
#include "Bai 22_phong to dg thangView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CBai22phongtodgthangView

IMPLEMENT_DYNCREATE(CBai22phongtodgthangView, CView)

BEGIN_MESSAGE_MAP(CBai22phongtodgthangView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CBai22phongtodgthangView construction/destruction

CBai22phongtodgthangView::CBai22phongtodgthangView() noexcept
{
	// TODO: add construction code here
}

CBai22phongtodgthangView::~CBai22phongtodgthangView()
{
}

BOOL CBai22phongtodgthangView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CBai22phongtodgthangView drawing

void CBai22phongtodgthangView::OnDraw(CDC* /*pDC*/)
{
	CBai22phongtodgthangDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC pDC(this);
	// TODO: add draw code for native data here
}


// CBai22phongtodgthangView printing

BOOL CBai22phongtodgthangView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CBai22phongtodgthangView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CBai22phongtodgthangView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CBai22phongtodgthangView diagnostics

#ifdef _DEBUG
void CBai22phongtodgthangView::AssertValid() const
{
	CView::AssertValid();
}

void CBai22phongtodgthangView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CBai22phongtodgthangDoc* CBai22phongtodgthangView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CBai22phongtodgthangDoc)));
	return (CBai22phongtodgthangDoc*)m_pDocument;
}
#endif //_DEBUG


// CBai22phongtodgthangView message handlers

void CBai22phongtodgthangView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	p1.x = point.x;
	p1.y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CBai22phongtodgthangView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	p2.x = point.x;
	p2.y = point.y;
	CClientDC pDC(this);
	dt1.thietlap(p1.x, p1.y, p2.x, p2.y);
	dt1.ve(&pDC);
	CView::OnLButtonUp(nFlags, point);
}

void CBai22phongtodgthangView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: Add your message handler code here and/or call default
	key = nChar;
	if (key == 38)
	{
		CClientDC pDC(this);
		dt1.phong_to_dt(&pDC);
	}
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


