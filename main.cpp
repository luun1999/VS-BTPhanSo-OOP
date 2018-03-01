///VS_Cac thao tac nhap xuat_OOP
#include <iostream>
#include <stdlib.h>
#include "PSo.h"

using namespace std;

void main()
{
	///Khai bao Object p, q, tong thuoc class Pso.
	PSo p, q, tong;

	///Goi ham NhapPhanSo de nhap lieu cho Object
	p.NhapPhanSo();
	q.NhapPhanSo();
	
	tong = p.CongPhanSo(q);
	tong.RutGonPhanSo();

	cout << "Tong hai phan so la: ";
	tong.XuatPhanSo();

}
