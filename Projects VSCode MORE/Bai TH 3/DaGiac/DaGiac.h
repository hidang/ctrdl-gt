#pragma once
#include "Diem.h"
class DaGiac
{
private:
    int soluongdiem;
    Diem *diem;

public:
    //DaGiac();
    DaGiac(int n);
    DaGiac &operator=(const DaGiac &dagiac); //(1)*: hàm dựng sao chép
    int GetSoLungDiem();
    ~DaGiac();

    void Nhap();
    void Xuat();

    void TinhTien();
    void Quay();
    void ThuPhong();
};
