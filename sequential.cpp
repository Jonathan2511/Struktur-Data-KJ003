#include <iostream>
using namespace std;
//Jonathan Aditya Puryanto 20210801001

int main(){
int arraynomor[5];
int nomor;
int lokasi=5;

cout<<"Masukkan 5 nomor kedalam array: "<<endl;
for(int i=0; i<5; i++)
	{
		cin >> arraynomor[i];
	}
cout <<endl;
cout << "Masukkan nomor yang ingin dicari: ";
cin >> nomor;
cout << endl;
 
for(int w=0;w<5;w++)
	{
		if (arraynomor[w] == nomor)
		lokasi=w;
	}
if(lokasi !=5)
	{
		cout<<"Nomor yang dicari berada di indeks ke "<< lokasi << " dan posisi ke " << lokasi+1;
		cout<<endl;
	}
else
	cout<<"Nomor yang dimasukkan tidak ditemukan ";

return.0;
}