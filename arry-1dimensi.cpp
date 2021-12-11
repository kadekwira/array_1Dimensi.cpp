#include <iostream>

using namespace std;

int main()
{
    int jumArr;
    cout<<" Masukan Jumlah Aray : ";
    cin>>jumArr;
   int angka[jumArr];

   for(int p=0; p<jumArr; p++)
   {
       cout<<" Masukan Index ke -"<<p<<" : ";
       cin>>angka[p];
   }
   cout<<"====================================="<<endl;
   cout<<"      INDEX    YANG  TERSIMPAN       "<<endl;
   cout<<"====================================="<<endl;

   for(int q=0; q<jumArr; q++)
   {
       cout<<" Index ke -"<<q<<" memiliki nilai : "<<angka[q]<<endl;
   }

    return 0;
}
