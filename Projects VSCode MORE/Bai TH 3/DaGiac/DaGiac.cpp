#include <iostream>
#include <math.h>
#include "DaGiac.h"
using namespace std;
DaGiac::DaGiac(int n)
{
    soluongdiem = n;
    diem = new Diem[n];
}
DaGiac::~DaGiac()
{
    delete diem;
}

int DaGiac::GetSoLungDiem()
{
    return soluongdiem;
}

//cài đặt cho hàm dựng sao chép (Trang 8 file word OOP_BTH3)
//việc dùng hàm dựng sao chép giải quyết vấn đề con trỏ diem của 2 DaGiac khác nhau bị trỏ chung vào 1 nơi
DaGiac &DaGiac::operator=(const DaGiac &dagiac)
{                                           //(1)*
    this->soluongdiem = dagiac.soluongdiem; //note * contrustor copy(hàm dựng) lay dc bien trong private cua &dagiac
    diem = new Diem[this->soluongdiem];

    for (int i = 0; i < this->soluongdiem; i++)
    {
        diem[i] = dagiac.diem[i];
    }

    return *this; //<---WHAT IS THIS? -vvv
    //https://daynhauhoc.com/t/vi-sao-khi-return-this-ch-ng-trinh-l-i-t-g-i-destructor/14050/3
}

void DaGiac::Nhap()
{
    for (int i = 0; i < this->soluongdiem; i++)
    {
        cout << "Dinh thu: " << i + 1 << endl;
        diem[i].Nhap();
    }
}

void DaGiac::Xuat()
{
    for (int i = 0; i < this->soluongdiem; i++)
    {
        cout << "Dinh thu: " << i + 1 << endl;
        diem[i].Xuat();
    }
}

void DaGiac::TinhTien()
{
    cout << "Tinh tien theo vec to: ";
    double a, b;
    cin >> a >> b;
    cout << "Da giac sau khi tinh tien: " << endl;

    for (int i = 0; i < this->soluongdiem; i++)
    {
        cout << "Dinh "
             << "thu " << i + 1 << endl;
        diem[i].TinhTien(a, b);
    }
}

void DaGiac::Quay()
{
    cout << "Goc quay:  ";
    double rad;
    cin >> rad;
    cout << "Da giac sau khi quay: " << endl;

    for (int i = 0; i < this->soluongdiem; i++)
    {
        cout << "Dinh "
             << "thu " << i + 1 << endl;
        diem[i].Quay(rad);
    }
}

void DaGiac::ThuPhong()
{
    cout << "He so thu phong:  ";
    double k;
    cin >> k;
    if (k > 0)
        cout << "Da giac sau khi Phong To: " << endl;
    else
    {
        cout << "Da giac sau khi Thu Nho: " << endl;
        k = -k;
    }

    for (int i = 0; i < this->soluongdiem; i++)
    {
        cout << "Dinh "
             << "thu " << i + 1 << endl;
        diem[i].ThuPhong(k);
    }
}