#include <iostream>
using namespace std;
//Jonathan Aditya Puryanto 20210801001

int main(){
int arraynomor[4];
int nomor;
int awal=0;
int akhir=4;
int tengah;
int lokasi=5;

cout<<"Masukkan 5 nomor kedalam array: "<<endl;
for(int i=0; i<5; i++)
	{
		cin>>arraynomor[i];
	}
cout<<endl;
cout<<"Masukkan nomor yang ingin dicari: ";
cin>>nomor;
cout<<endl;
 
while(awal<=akhir){
tengah= (awal+akhir)/2;

if(arraynomor[tengah]==nomor)
	{
		lokasi=tengah;
		break;
	}

if(nomor<arraynomor[tengah])
	akhir=tengah-1;
 
if(nomor>arraynomor[tengah])
		awal=tengah+1;
}

if(lokasi==5)
	cout<<"Nomor yang dimasukkan tidak ditemukan "<<endl;
else
	cout<<"Nomor yang dicari berada di indeks ke "<< lokasi << " dan posisi ke " << lokasi+1;
 
return.0;
}