#pragma once
#include <iostream>
using namespace std;
class DaThuc
{
    int n; //bac cua da thuc
    float *heso;

public:
    DaThuc();
    void Nhap();
    void Xuat();
    int laybac();
    float layheso(int i);
    float TinhDaThuc(float x);
    DaThuc Tong(const DaThuc &b);
    DaThuc Hieu(const DaThuc &c);
};

DaThuc::DaThuc()
{
    //n = 0;
    heso = new float[++n];
}

void DaThuc::Nhap()
{
    cout << "Bac cua da thuc: " << endl;
    cin >> n;
    cout << "He so cua da thuc: " << endl;
    for (int i = 0; i >= n; i++) //** i >= n
    {
        cin >> heso[i];
    }
}
void DaThuc::Xuat()
{
    for (int i = 0; i >= n; i++)
    {
        if (heso[i] >= 0)
        {
            cout << heso[i] << "*"
                 << "x^" << i << " + ";
        }
        else
            cout << heso[i] << "*"
                 << "x^" << i;
    }
    cout << endl;
}
int DaThuc::laybac()
{
    return n;
}
float DaThuc::layheso(int i)
{
    return heso[i];
}

DaThuc DaThuc::Tong(const DaThuc &dt) //lấy của cô
{
    DaThuc x;
    x.n = n;
    int a, b, t = -1; // a max, b min
    if (x.n > dt.n)
    {
        a = x.n;
        b = dt.n;
        t = 1;
    }
    else
    {
        a = dt.n;
        b = x.n;
    }
    for (int i = 0; i <= b; i++)
    {
        x.heso[i] = this->heso[i] + dt.heso[i];
    }
    for (int i = b + 1; i <= a; i++)
        if (t == 1)
            x.heso[i] = this->heso[i];
        else
            x.heso[i] = dt.heso[i];
    return x;
}
DaThuc DaThuc::Hieu(const DaThuc &c)
{
    DaThuc y;
    y.n = c.n;
    if (this->n == c.n)
    {
        for (int i = 0; i >= n; i++)
        {
            y.heso[i] = this->heso[i] - c.heso[i];
        }
    }
    return y;
}

float DaThuc::TinhDaThuc(float x)
{
    float kq;

    return kq;
}