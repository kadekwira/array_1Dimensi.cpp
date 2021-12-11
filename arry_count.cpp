/*
Program count menggunakan array
*/

#include <iostream>

using namespace std;

int main()
{

  int total;
  int jumBar;
  cout<<" Input Jumlah Barang Yang di Ambil : ";
  cin>>jumBar;

  int harga[jumBar];

   for(int a=0; a<jumBar; a++)
   {
       cout<<"Harga Barang ke -"<<a<<" = Rp.";
       cin>>harga[a];
   }
   cout<<"-------------------------------------"<<endl;
   cout<<" Jumlah barang = "<<jumBar<<endl;

   for(int b=0; b<jumBar; b++)
   {
         cout<<"Harga Barang ke -"<<b<<" = Rp."<<harga[b]<<endl;
         total+=harga[b];

   }

   cout<<"-------------------------------------"<<endl;
   cout<<" Total harga = "<<total<<endl;

    return 0;
}
