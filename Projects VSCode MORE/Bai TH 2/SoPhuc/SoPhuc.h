#pragma once
class SoPhuc
{
private:
	float a1, a2;

public:
	void Nhap();
	void Xuat();
	SoPhuc Tong(const SoPhuc &a);
	SoPhuc Hieu(const SoPhuc &a);
	SoPhuc Tich(const SoPhuc &a);
	SoPhuc Thuong(const SoPhuc &a);
	float Geta1();
	float Geta2();
	void Seta1(float ane);
	void Seta2(float bne);
};