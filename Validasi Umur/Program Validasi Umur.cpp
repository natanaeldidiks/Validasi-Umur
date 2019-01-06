#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int usia;
    cout<<"Masukan Umur Anda : ";
    cin>>usia;
        if(usia>=1,usia<=5)
        {
            cout<<"\nAnda Balita";
        }
        else if(usia>=5,usia<=15)
        {
            cout<<"\nAnda Anak-Anak";
        }
        else if(usia>=15,usia<=22)
        {
            cout<<"\nAnda Remaja";
        }
        else if(usia>=22,usia<=30)
        {
            cout<<"\nAnda Dewasa";
        }
        else if(usia>=30,usia<=50)
        {
            cout<<"\nAnda Orang Tua";
        }
        else if(usia>=50,usia<=100)
        {
            cout<<"\nAnda Lansia";
        }
getch();
return 0;
}
