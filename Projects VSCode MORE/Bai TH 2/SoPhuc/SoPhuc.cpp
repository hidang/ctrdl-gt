#include <iostream>
#include "SoPhuc.h"
using namespace std;

void SoPhuc::Nhap()
{
	cin >> this->a1;
	cin >> this->a2;
}
void SoPhuc::Xuat()
{
	cout << this->a1 << " "
		 << this->a2 << "i" << endl
		 << endl;
}

SoPhuc SoPhuc::Tong(const SoPhuc &a)
{
	SoPhuc kq;
	kq.a1 = this->a1 + a.a1;
	kq.a2 = this->a2 + a.a2;
	return kq;
}
SoPhuc SoPhuc::Hieu(const SoPhuc &a)
{
	SoPhuc kq;
	kq.a1 = this->a1 - a.a1;
	kq.a2 = this->a2 - a.a2;
	return kq;
}
SoPhuc SoPhuc::Tich(const SoPhuc &a)
{
	SoPhuc kq;
	kq.a1 = this->a1 * a.a1 - this->a2 * a.a2;
	kq.a2 = this->a1 * a.a2 + this->a2 * a.a1;
	return kq;
}
SoPhuc SoPhuc::Thuong(const SoPhuc &a)
{
	SoPhuc kq;
	kq.a1 = (this->a1 * a.a1 + this->a2 * a.a2) / (a.a1 * a.a1 + a.a2 * a.a2);
	kq.a2 = (a.a1 * this->a2 - this->a1 * a.a2) / (a.a1 * a.a1 + a.a2 * a.a2);
	return kq;
}

float SoPhuc::Geta1()
{
	return this->a1;
}
float SoPhuc::Geta2()
{
	return this->a2;
}
void SoPhuc::Seta1(float ane)
{
	this->a1 = ane;
}
void SoPhuc::Seta2(float ane)
{
	this->a1 = ane;
}