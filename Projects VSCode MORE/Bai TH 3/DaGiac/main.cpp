#include <iostream>
#include "Diem.h"
#include "Diem.cpp"
#include "DaGiac.h"
#include "DaGiac.cpp"
using namespace std;

void justCOUT()
{
    cout << "LUA CHON CAC PHEP BIEN DOI HINH HOC" << endl;
    cout << "1: Tinh tien" << endl;
    cout << "2: Quay" << endl;
    cout << "3: ThuPhong" << endl;
    cout << "0: EXIT" << endl;
    cout << "Chon: ";
}

int main()
{
    cout << "Nhap so dinh cua da giac: ";
    int n;
    cin >> n;

    DaGiac A(n);

    cout << "Nhap toa do cac dinh: " << endl;
    A.Nhap();

    justCOUT();
    int thaotac = 123;
    DaGiac KQ(A);
    while (thaotac != 0)
    {
        cin >> thaotac;
        if (thaotac == 1)
        {
            KQ.TinhTien();
        }
        if (thaotac == 2)
        {
            KQ.Quay();
        }
        if (thaotac == 3)
        {
            KQ.ThuPhong();
        }
        justCOUT();
    }

    return 0;
}
