#pragma once
class PSo
{
private:
	int iTuSo;
	int iMauSo;

public:
	PSo();

	void NhapPhanSo();
	void XuatPhanSo();
	PSo CongPhanSo(PSo);
	void RutGonPhanSo();
};

