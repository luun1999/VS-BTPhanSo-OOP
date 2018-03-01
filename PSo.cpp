///File cai dat cac method cua class PSo

#include "PSo.h"
#include <iostream>

using namespace std;

///Constructor(Ham khoi tao gia tri)
PSo::PSo()
{
	iTuSo = 0;
	iMauSo = 1;
}


///Cai dat cho ham Nhap
void PSo::NhapPhanSo()
{
	cout << "Nhap vao phan so:\n";

	cout << "Tu so: ";
	cin >> iTuSo;
	
	///Xu li khi MauSo = 0
	do
	{
		cout << "Mau so: ";
		cin >> iMauSo;
	} while (iMauSo == 0);

	///Khi MauSo mang gia tri am thi se doi dau voi TuSo
	if (iMauSo < 0)
	{
		///Su sung ham abs de lay gia tri tuyet doi 
		iMauSo = abs(iMauSo);
		iTuSo = iTuSo * (-1);
	}
}

///Cai dat cho ham Xuat
void PSo::XuatPhanSo()
{
	///Khi MauSo = 1 thi chi in TuSo, 
	if (iMauSo == 1)
		cout << iTuSo;
	else
	{
		cout << iTuSo;
		cout << "/";
		cout << iMauSo;
	}
}

///Rut gon phan so bang phuong phap chia UCLN
void PSo::RutGonPhanSo()
{
	///Dam bao gia tri duong de lay UCLN
	int t = abs(iTuSo);
	int m = iMauSo;

	///Vong lap tim UCLN khi t va m bang nhau thi vong lap ket thuc.
	///Vong lap ket thuc thi UCLN = t = m.
	while (t != m)
	{
		if (t > m)
			t = t - m;
		else
			m = m - t;
	}

	///Chia tu va mau cho UCLN de rut gon phan so 
	iTuSo = iTuSo / t;
	iMauSo = iMauSo / t;
}

///Cong phan so
///----method nay dung de cong "Object Phan So hien hanh" + "Object Phan So truyen vao"----
PSo PSo::CongPhanSo(PSo x)
{
	PSo Tong;

	///Con tro "this" tro toi "thuoc tinh" hien hanh cua doi tuong goi ham CongPhanSo
	///Cong voi quy tac quy dong phan so
	Tong.iTuSo = this->iTuSo * x.iMauSo + this->iMauSo * x.iTuSo;
	Tong.iMauSo = this->iMauSo * x.iMauSo;

	///Tra ve lop Pso
	return Tong;
}


