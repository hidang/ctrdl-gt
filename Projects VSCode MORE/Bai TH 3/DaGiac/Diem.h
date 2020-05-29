#pragma once
class Diem
{
private:
    double x, y;

public:
    Diem();
    Diem(const Diem &diem);
    ~Diem();

    void Nhap();
    void Xuat();

    double GetX();
    double GetY();
    // void SetX(double X);
    // void SetY(double Y);
    void TinhTien(double aa, double bb);
    void Quay(double rad);
    void ThuPhong(double k);
};
