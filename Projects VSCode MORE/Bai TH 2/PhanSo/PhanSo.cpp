#include <iostream>
#include "PhanSo.h"
using namespace std;

int PhanSo::LayTuSo()
{
	return m_iTuSo;
}

int PhanSo::LayMauSo()
{
	return m_iMauSo;
}

void PhanSo::DatTuSo(int iTuSo)
{
	m_iTuSo = iTuSo;
}

void PhanSo::DatMauSo(int iMauSo)
{
	m_iMauSo = iMauSo;
}

PhanSo PhanSo::Cong(const PhanSo& a) //const se khong thay doi gia tri cua a (luc nay a la phanso truyen vao)
{
	PhanSo c;

	c.m_iTuSo = this->m_iTuSo * a.m_iMauSo + a.m_iTuSo * this->m_iMauSo;
	c.m_iMauSo = this->m_iMauSo * a.m_iMauSo;

	return c;
}

PhanSo PhanSo::Tru(const PhanSo& a) //const se khong thay doi gia tri cua a (luc nay a la phanso truyen vao)
{
	PhanSo c;
	//c.m_iTuSo = 0;
	//c.m_iMauSo = 0;//reset lai bien c vi truong hop 2 phan so ban nhau ra 0 se bi dinh lai m_iMauSo cua phep tong ben tren

	c.m_iTuSo = this->m_iTuSo * a.m_iMauSo - a.m_iTuSo * this->m_iMauSo;

	c.m_iMauSo = this->m_iMauSo * a.m_iMauSo;

	return c;
}

PhanSo PhanSo::Nhan(const PhanSo& a) //const se khong thay doi gia tri cua a (luc nay a la phanso truyen vao)
{
	PhanSo c;

	c.m_iTuSo = this->m_iTuSo * a.m_iTuSo;
	c.m_iMauSo = this->m_iMauSo * a.m_iMauSo;

	return c;
}

PhanSo PhanSo::Chia(const PhanSo& a) //const se khong thay doi gia tri cua a (luc nay a la phanso truyen vao)
{
	PhanSo c;

	c.m_iTuSo  = this->m_iTuSo * a.m_iMauSo;
	c.m_iMauSo = this->m_iMauSo * a.m_iTuSo;

	return c;
}

int UCLN(int a, int b) {
	if (a % b != 0)
		return UCLN(b, a % b);
	else
		return b;
}
void PhanSo::RutGon() {
	int ucln = UCLN(this->m_iTuSo, this->m_iMauSo);
	this->m_iTuSo /= ucln;
	this->m_iMauSo /= ucln;
}
