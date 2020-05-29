#pragma once //giup cho file .h duoc bien dich 1 lan tranh viec bien dich nhieu lan
class PhanSo
{
	private:
		int	m_iTuSo;
		int	m_iMauSo;
	public:
		int LayTuSo();
		int LayMauSo();
		void DatTuSo(int iTuso);
		void DatMauSo(int iMauSo);
		PhanSo Cong(const PhanSo& a);
		PhanSo Tru(const PhanSo& a);
		PhanSo Nhan(const PhanSo& a);
		PhanSo Chia(const PhanSo& a);
		void RutGon();
};
