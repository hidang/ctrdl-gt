#include <iostream>
#include <math.h>
using namespace std;

void Diem::Nhap()
{
    int a, b;
    cin >> a >> b;
}
void Diem::Xuat()
{
    cout << x << endl
         << y << endl;
}

void Diem::TinhTien(double aa, double bb)
{
    cout << "(" << this->x + aa << "," << y + bb << ")" << endl;
}
void Diem::Quay(double rad)
{
    cout << "(" << this->x * cos(rad) + this->y * sin(rad) << " , "
         << this->x * sin(rad) + this->y * cos(rad) << ")" << endl;
}
void Diem::ThuPhong(double k)
{
    cout << "(" << this->x * k << "," << this->y * k << ")" << endl;
}
