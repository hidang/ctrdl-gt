#include <iostream>
#include "Candidate.h"
#include "Candidate.cpp" //Vs Studio khong can thiet khai bao
#include "testCandidate.h"
#include "testCandidate.cpp" //Vs Studio khong can thiet khai bao
using namespace std;

int main()
{
	Candidate *SV; //mang dong(mang con tro)
	int n;
	cin >> n;
	SV = new Candidate[n]; //cap phat luong phan tu dung voi So Luong n nhap vao(Cap phat bo nho dong)

	TestCandidate SVlonhon15diem;

	for (int i = 0; i < n; i++)
	{
		cout << "Thong tin sinh vien thu " << i + 1 << " : " << endl;
		SV[i].Nhap();
		//nhap xong thi check va truyen vao nuôn
		if (SV[i].LayTongDiem() > 15)
		{
			SVlonhon15diem.GetSV(SV[i]);
		}
	}

	SVlonhon15diem.Xuat();
	return 0;
}
