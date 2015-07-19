#include <iostream>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
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
    int index,j,enkucuk;
    for(i=0;i<(n-1);i++)
    {
        enkucuk=dizi[n-1];
        index=n-1;
        for(j=i;j<(n-1);j++)
            if(dizi[j]<enkucuk){
        enkucuk=dizi[j];
        index=j;
            }


    dizi[index]=dizi[i];
    dizi[i]=enkucuk;
    cout<<"siralanan dizi elemanlari:";
     for (i=0;i<n;i++)
    {
        cout<<endl<<dizi[i]<<" ";
    }
    }

}
