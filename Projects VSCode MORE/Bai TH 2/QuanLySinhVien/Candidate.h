#pragma once
class Candidate
{
private:
    char Ma[10];
    char HoTen[50];
    char NgaySinh[10];
    float Toan, Van, Anh;

public:
    void Nhap();
    void Xuat();
    float LayTongDiem();
};
