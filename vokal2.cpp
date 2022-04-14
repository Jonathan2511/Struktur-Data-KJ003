#include <iostream>
using namespace std;
//Jonathan Aditya Puryanto 20210801001

int main()
{
    string a;
    string b;

    int o, l, vokal, konsonan;
    o = l  = vokal = konsonan = 0;
    
    cout <<"Input : ";getline(cin,a); //getline menghitung spasi dalam C++
    cout<<"Output : "<<endl;
    cout<<"Vokal : ";
    for (int z=0;z<a[z];z++) 
        {
            o++;
        }

            for (int q=0;q<o;q++) 
                {
                    if (a[q]=='a' || a[q]=='e' || a[q]=='i' ||
                        a[q]=='o' || a[q]=='u' || a[q]=='A' ||
                        a[q]=='E' || a[q]=='I' || a[q]=='O' ||
                        a[q]=='U')
                        {
                            vokal++;
                        }
                }

    if (vokal>0) 
        {
           cout<<vokal<<" = ";

            for (int q=0;q<o;q++)
                {
                    if (a[q]=='a' || a[q]=='e' || a[q]=='i' ||
                        a[q]=='o' || a[q]=='u' || a[q]=='A' ||
                        a[q]=='E' || a[q]=='I' || a[q]=='O' ||
                        a[q]=='U')
                        {
                            cout<<a[q]<<" ";
                        }
                }
        }
    else 
        {
            cout<<"Kalimat vokal tidak ada...";
        }
cout<<endl;
cout<<"Konsonan : ";
            for (int q=0;q<o;q++) 
                {
                    if (a[q]=='b'||a[q]=='c'||a[q]=='d'||a[q]=='f'||a[q]=='g'||a[q]=='h'||
                        a[q]=='j'||a[q]=='k'||a[q]=='l'||a[q]=='m'||a[q]=='n'||a[q]=='p'||
                        a[q]=='q'||a[q]=='r'||a[q]=='s'||a[q]=='t'||a[q]=='v'||a[q]=='w'||
                        a[q]=='x'||a[q]=='y'||a[q]=='z'||a[q]=='B'||a[q]=='C'||a[q]=='D'||
                        a[q]=='F'||a[q]=='G'||a[q]=='H'||a[q]=='J'||a[q]=='K'||a[q]=='L'||
                        a[q]=='M'||a[q]=='N'||a[q]=='P'||a[q]=='Q'||a[q]=='R'||a[q]=='S'||
                        a[q]=='T'||a[q]=='V'||a[q]=='W'||a[q]=='X'||a[q]=='Y'||a[q]=='Z')
                        {
                            konsonan++;
                        }
                }

if (konsonan>0) 
    {
        cout<<konsonan<<" = ";

            for (int q=0;q<o;q++)
                {
                    if (a[q]=='b'||a[q]=='c'||a[q]=='d'||a[q]=='f'||a[q]=='g'||a[q]=='h'||
                        a[q]=='j'||a[q]=='k'||a[q]=='l'||a[q]=='m'||a[q]=='n'||a[q]=='p'||
                        a[q]=='q'||a[q]=='r'||a[q]=='s'||a[q]=='t'||a[q]=='v'||a[q]=='w'||
                        a[q]=='x'||a[q]=='y'||a[q]=='z'||a[q]=='B'||a[q]=='C'||a[q]=='D'||
                        a[q]=='F'||a[q]=='G'||a[q]=='H'||a[q]=='J'||a[q]=='K'||a[q]=='L'||
                        a[q]=='M'||a[q]=='N'||a[q]=='P'||a[q]=='Q'||a[q]=='R'||a[q]=='S'||
                        a[q]=='T'||a[q]=='V'||a[q]=='W'||a[q]=='X'||a[q]=='Y'||a[q]=='Z')
                        {
                            cout<<a[q]<<" ";
                        }
                }
    }
else 
    {
        cout<<"Kalimat konsonan tidak ada...";
    }
cout<<endl;
cout<<endl;
cout<<"Masukkan data yang ingin dicari : ";cin>>b;
cout<<endl;

for (int q=0;q<o;q++) 
        {
            if (a[q]==b[0])
            {
                            l++;
            }
        }
if (l>0) //jika ada
    {
        cout<<"Data ditemukan, sebanyak "<<l<<" data";
    }
else //jika tidak ada
    {
        cout<<"Data tidak ada... ";
    }
    return 0;
}
