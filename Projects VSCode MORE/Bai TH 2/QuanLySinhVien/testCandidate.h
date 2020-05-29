#pragma once
#include "Candidate.h"
class TestCandidate
{
private:
    int n = 0; //so luong sinh vien co diem lon hon 15
    //Candidate ds[50];
    Candidate *ds = NULL;

public:
    void GetSV(Candidate sinhviendone);
    void Xuat();
};