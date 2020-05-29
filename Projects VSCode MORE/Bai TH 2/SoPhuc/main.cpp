#include <iostream>
#include "SoPhuc.h"
#include "SoPhuc.cpp"

using namespace std;


int main()
{
	SoPhuc A, B, KQ;
	A.Nhap();
	B.Nhap();
	KQ=A.Tong(B);
	KQ.Xuat();
	KQ=A.Hieu(B);
	KQ.Xuat();
	KQ=A.Tich(B);
	KQ.Xuat();
	KQ=A.Thuong(B);
	KQ.Xuat();
	return 0;
}


