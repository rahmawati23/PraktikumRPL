#include <iostream.h>
#include <conio.h>

main()
{

   cout<<"Pembuat Program Rahmawati "<<endl;
   cout<<"NIM  :  1127050125, IF-2-C"<<endl;
   cout<<"======================================="<<endl;
   cout<<"                                       "<<endl;

	int i,n[5];
	float r,t;

	for(i=0;i<5;i++)
	{
		cout<<"Masukan Nilai ke-"<<(i+1)<<" : ";
		cin>>n[i];
	}
	cout<<"Bilangan yang d inputkan : \n";

	for(i=0;i<5;i++)
	{
		cout<<n[i]<<" ";
	}
	cout<<"\n";
		t=0;
		for(i=0;i<5;i++)
			t=t+n[i];
			r=t/5;
			cout<<"Total : "<<t<<"\n";
			cout<<"Rata-rata : "<<r;
getch();
}