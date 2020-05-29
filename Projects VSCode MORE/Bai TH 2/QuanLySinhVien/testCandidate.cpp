#include <iostream>
using namespace std;

void TestCandidate::Xuat()
{
    cout << "CAC SINH VIEN CO TONG DIEM LON HON 15" << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << endl
             << "Sinh vien thu " << i + 1 << endl;
        ds[i].Xuat();
    }
}
void TestCandidate::GetSV(Candidate sinhviendone)
{
    n++;
    //Candidate* temp;
    //temp = (Candidate*) realloc (this->ds, this->n * sizeof(Candidate));

    this->ds = (Candidate *)realloc(this->ds, this->n * sizeof(Candidate));
    ;
    this->ds[n - 1] = sinhviendone;
    //cach dung realloc xem tai day: http://www.cplusplus.com/reference/cstdlib/realloc/
}
