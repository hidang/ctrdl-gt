#include <iostream>
#include "PhanSo.h"
#include "PhanSo.cpp"
using namespace std;

void NhapPhanSo(PhanSo &PhanSoNe) {
	int Tu, Mau;
	cin >> Tu >> Mau;
	PhanSoNe.DatTuSo(Tu);
	PhanSoNe.DatMauSo(Mau);
}
void XuatPhanSo(PhanSo &PhanSoNe) {
	PhanSoNe.RutGon();
	cout << "Tu so c = " << PhanSoNe.LayTuSo() << endl;
	cout << "Mau so c = " << PhanSoNe.LayMauSo() << endl;
}
int main()
{
	PhanSo a, b, c;
	NhapPhanSo(a);
	NhapPhanSo(b);
	cout << "Tong: " << endl;
	c = a.Cong(b);
	XuatPhanSo(c);
	cout << "Hieu: " << endl;
	c = a.Tru(b);
	XuatPhanSo(c);
	cout << "Tich: " << endl;
	c = a.Nhan(b);
	XuatPhanSo(c);
	cout << "Thuong: " << endl;
	c = a.Chia(b);
	XuatPhanSo(c);

	return 0;
}


