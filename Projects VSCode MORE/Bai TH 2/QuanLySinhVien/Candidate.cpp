#include <iostream>

using namespace std;
void Candidate::Nhap()
{
    cout << "MSSV: ";
    cin.ignore(); //them vao de xoa bo nho dem tranh viec loi khi nhap nhieu mang char,string trong mot chuong trinh
    cin.getline(this->Ma, 10);

    cout << "Ho va Ten: ";
    cin.ignore();
    cin.getline(this->HoTen, 50);

    cout << "Ngay Sinh: ";
    cin.ignore();
    cin.getline(this->NgaySinh, 10);

    cout << "Diem Toan Van Anh: ";
    cin >> this->Toan >> this->Van >> this->Anh;
}

float Candidate::LayTongDiem()
{
    return Toan + Van + Anh;
}

void Candidate::Xuat()
{
    cout << "MSSV: " << this->Ma << endl;
    cout << "Ho va Ten: " << this->HoTen << endl;
    cout << "Ngay Sinh: " << this->NgaySinh << endl;
    cout << "Diem Toan Van Anh: " << this->Toan << " " << this->Van << " " << this->Anh << endl;
}
