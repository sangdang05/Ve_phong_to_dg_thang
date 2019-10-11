#pragma once
class duong_thang
{
public:
	int x1, y1, x2, y2;
	duong_thang();
	void thietlap(int mx1, int my1, int mx2, int my2);
	void ve(CClientDC *pDC);
	void phong_to();
	void phong_to_dt(CClientDC *pDC);
	~duong_thang();
};

