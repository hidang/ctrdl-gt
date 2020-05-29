#include <iostream>
#include "DaThuc.h"
using namespace std;

int main()
{
    DaThuc A, B, KQ;

    cout << "Da thuc A: " << endl;
    A.Nhap();
    cout << "Da thuc B: " << endl;
    B.Nhap();
    // cout << "Da thuc A la: ";
    // A.Xuat();
    // cout << "Da thuc B la: ";
    // B.Xuat();

    if (A.laybac() > B.laybac())
    {
        cout << "A lon hon B" << endl;
    }
    else if (A.laybac() < B.laybac())
    {
        cout << "A nho hon B" << endl;
    }
    else //bac bang nhau😁
    {
        if (A.TinhDaThuc(1) == B.TinhDaThuc(1))
        {
            cout << "A bang B" << endl;
        }
        else if (A.TinhDaThuc(1) > B.TinhDaThuc(1))
        {
            cout << "A lon hon B" << endl;
        }
        else
        {
            cout << "A nho hon B" << endl;
        }
    }

    cout << "Tong hai da thuc: " << endl;
    KQ = A.Tong(B);
    KQ.Xuat();
    cout << endl;

    cout << "Hieu hai da thuc la: " << endl;
    KQ = A.Hieu(B);
    KQ.Xuat();

    return 0;
}
