#include <iostream>
#include "DaThuc.h"
#include "DaThuc.cpp"
using namespace std;

int main()
{
    DaThuc A, B, kq;
    float k;
    cout << "Da thuc A: ";
    cin >> A;
    cout << "Da thuc B: ";
    cin >> B;
    if (A == B)
    {
        cout << "Giong nhau\n";
    }
    else
    {
        cout << "Khac nhau\n";
    }
    cout << "Tong la:  " << A + B;
    cout << "Hieu la:  " << A - B;
    cout << "Tich la: " << A * B << endl;
    cout << "Nhap k:";
    cin >> k;
    cout << "Da thuc A " << k << "la: " << A * k;
    cout << "Da thuc B " << k << "la: " << B * k;

    return 0;
}
