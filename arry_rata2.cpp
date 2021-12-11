/* PROGRAM RATA RATA MENGGUNAKAN ARRAY */

#include<iostream>
using namespace std;

int main()
{
    int jumData;
    cout<<" Masukan Jumlah Data : ";
    cin>>jumData;

    float data[jumData];
    cout<<endl;
    float total,rata2;

    for(int a=0; a<jumData; a++)
    {
        cout<<" Masukan Data ke - "<<a<<" = ";
        cin>>data[a];
    }
    for(int b=0;b<jumData;b++)
    {
        total+=data[b];
    }

    cout<<" Total Jum Data : "<<total<<endl;

    rata2=total/jumData;

    cout<<" Rata Rata nya adalah : "<<rata2<<endl;

return 0;
}

