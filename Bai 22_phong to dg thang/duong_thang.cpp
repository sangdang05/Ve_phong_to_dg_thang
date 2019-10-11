#include "stdafx.h"
#include "duong_thang.h"


duong_thang::duong_thang()
{
}
void duong_thang::thietlap(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1;
	y1 = my1;
	x2 = mx2;
	y2 = my2;
}
void duong_thang::ve(CClientDC *pDC)
{
	pDC->MoveTo(x1, y1); pDC->LineTo(x2, y2);
}
void duong_thang::phong_to()
{
	x1 -= 5;
	y1 -= 5;
	x2 += 5;
	y2 += 5;
}
void duong_thang::phong_to_dt(CClientDC *pDC)
{
	
	int i = 0;
	while (i < 20)
	{
		CPen *pen;
		pen = new CPen(PS_SOLID, i, RGB(0, 0, 0));
		CPen *oldpen;
		Sleep(200);
		ve(pDC);
		oldpen = pDC->SelectObject(pen);//chon but ve
		ve(pDC);
		phong_to();
		pen = pDC->SelectObject(oldpen);
		i++;
	}
}
duong_thang::~duong_thang()
{
}
