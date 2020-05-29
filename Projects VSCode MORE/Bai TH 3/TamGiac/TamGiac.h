#pragma once
#include "Diem.h"
#include "Diem.cpp"
class TamGiac
{
private:
    Diem A, B, C;

public:
    TamGiac &operator=(const TamGiac &tamgiac); //(1)*: hàm dựng sao chép

    void Nhap();
    void Xuat();

    void TinhTien();
    void Quay();
    void ThuPhong();
};
