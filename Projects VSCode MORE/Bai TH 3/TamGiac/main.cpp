#include <iostream>
#include "TamGiac.h"
#include "TamGiac.cpp"
using namespace std;

int main()
{
    TamGiac A;

    cout << "Nhap toa do cac dinh: " << endl;
    A.Nhap();

    TamGiac KQ(A);

    KQ.TinhTien();
    KQ.Quay();
    KQ.ThuPhong();
    return 0;
}
