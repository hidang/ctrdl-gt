#include <iostream>
#include <math.h>
#include "Diem.h"
using namespace std;

Diem::Diem() {}
Diem::Diem(const Diem &diem)
{
    this->x = diem.x;
    this->y = diem.y;
}
Diem::~Diem()
{
    //hmm khong co gi de delete de cho Co vui <3
}

void Diem::Nhap()
{
    cin >> this->x;
    cin >> this->y;
}
void Diem::Xuat()
{
    cout << this->x << endl;
    cout << this->y << endl;
}

double Diem::GetX()
{
    return this->x;
}
double Diem::GetY()
{
    return this->y;
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
