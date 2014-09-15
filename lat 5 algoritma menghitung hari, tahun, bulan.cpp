#include <iostream.h>
#include <conio.h>

main ()
{

	float d, d1, m, m1, y, y1, d2, m2, y2;
	int s_hari, hari, hari1, sisa_s;

	cout<<"\nMasukkan Hari awal (dd)  : ";// inputan hari awal
	cin>>d;
	cout<<"\nMasukkan bulan awal (mm) : ";// inputan bulan awal
	cin>>m;
	cout<<"\nMasukkan tahun awal (yy) : ";// inputan tahun awal
	cin>>y;
	cout<<"\nMasukkan Hari akhir (dd) : ";// inputan hari akhir
	cin>>d1;
	cout<<"\nMasukkan bulan akhir (mm): ";// inputan bulan akhir
	cin>>m1;
	cout<<"\nMasukkan tahun akhir (yy): ";// inputan tahun akhir
	cin>>y1;

		hari = (m*30)+(y*365)+d;
		hari1 = (m1*30)+(y1*365)+d1;
		s_hari = hari1-hari;// menghitung  selisih hari
		y2 = s_hari / 365;// mencari selisih tahun
		sisa_s = s_hari % 365;
		m2 = sisa_s / 30;
		d2 = sisa_s % 30;

	cout<<"\nJadi, Selisihnya : "<< y2 <<" Tahun, "<< m2 <<" Bulan, "<< d2 << " Hari.";

getch();
}

