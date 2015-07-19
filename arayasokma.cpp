#include <iostream>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int arayasokma(int A[], int sayi)
{
    int i,k,ekle;
    for (i=1;i<sayi;i++)
    {
        ekle=A[i];
        for (k=i-1;k>=0 && ekle<=A[k];k--)
        {
            A[k+1]=A[k];
        }
        A[k+1]=ekle;
    }
}
int main ()
{
    srand(time(NULL)); //kodlar her calistiginde ayni sayilari uretmemesi icin. bilgisayarýn o anki saatini baz aliyor.
    int dizi[10];
    int i;
    int n=sizeof(dizi)/sizeof(int); // dizi degiskeninin eleman sayisi
    for (i=0;i<n;i++)
    {
        dizi[i] = rand()%100; // 0 ile 100 arasinda sayi uret
    }
    cout<<"uretilen dizi elemanlari: ";
    for (i=0;i<n;i++)
    {
        cout<<dizi[i]<<" ";
    }
    arayasokma(dizi,n);
    cout<<endl;
    cout<<"araya sokma siralamasi: ";
    for (i=0;i<n;i++)
    {
        cout<<dizi[i]<<" ";
    }
    return 0;
}
