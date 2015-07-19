#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
int insertionsort(int A[],int N)
{
    int i,k,ekle;
    for(i=0;i<N;i++)
    {
        ekle=A[i];
        for(k=i-1;k>=0 && ekle<=A[k];k--)
        {
            A[k+1]=A[k];

        }

        A[k+1]=ekle;
    }
}
int main()
{
    srand(time(NULL));
    int dizi[10];
    int i;
    int n=sizeof(dizi)/sizeof(int);
    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
    }
    cout<<"rastgele yazilan dizi degerleri\n";
    for(i=0;i<n;i++)
    {
        cout<<dizi[i]<<" ";
    }
    insertionsort(dizi,n);
    cout<<"\nsiralamadan sonra dizi degerleri\n";
    for(i=0;i<n;i++)
    {
        cout<<dizi[i]<<" ";
    }
}
