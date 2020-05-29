#include <iostream>
using namespace std;
class HinhChuNhat 
{
    private: 
        int chieudai;
        int chieurong;

    public:
        HinhChuNhat(){//constructor khong co tham so (mac dinh)
            chieudai = 0;
            chieurong = 0;
        };
        HinhChuNhat(int a = 0 , int b = 0){//constructor co tham so
            chieudai = a;
            chieurong = b;
        };
        HinhChuNhat( const HinhChuNhat &hcn){
            //coppy something
            chieudai = hcn.chieudai;
            chieurong = hcn.chieurong;
        }; //constructor copy
        void Nhap();
        void XuatKQ();
        int TinhChuVi();
        int TinhDienTich();
        ~HinhChuNhat(){
            //delete something;
        };
};

void HinhChuNhat::Nhap() //dinh nghia ham oop
{
    cin >>this -> chieudai;
    cin >>this -> chieurong;
}

void HinhChuNhat::XuatKQ()
{
    cout <<"Chu vi ne: "<<TinhChuVi()<<endl;
    cout <<"Dien tich ne: "<<TinhDienTich()<<endl;
    //cout << this << endl;
}

int HinhChuNhat::TinhChuVi()
{
    return (chieudai+chieurong)*2;
}
int HinhChuNhat::TinhDienTich()
{
    return chieudai*chieurong;
}


int main(){
    HinhChuNhat hcn; //khai bao va su dung doi tuong
    //int a= hcn.chieudai;
    hcn.Nhap();
    hcn.XuatKQ();

    return 0;
}