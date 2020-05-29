#pragma once
class DaThuc
{
private:
    int n;
    float heso[200];

public:
    int laybac();
    float TinhDaThuc(float x);
    friend istream &operator>>(istream &is, DaThuc &x);
    friend ostream &operator<<(ostream &os, DaThuc x);
    DaThuc operator+(const DaThuc &x);
    DaThuc operator-(const DaThuc &x);
    DaThuc operator*(const DaThuc &x);
    DaThuc operator*(float x);
    bool operator==(const DaThuc &x);
};