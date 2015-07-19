#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int orta;
    int bas=0;
    int son=4;
    int ara;
    int l=-5;
    int i;
    int A[5];
    cout<<"--Dizi icin deger giriniz--"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<i<<".indisli sayi";
        cin>>A[i];
    }
    cout<<"aranacak sayi giriniz";
    cin>>ara;
    while(bas<=son)
    {
        orta=(bas+son)/2;
        if(ara==A[orta])
        {
            l=orta;
            break;
        }
        if(ara<A[orta])
        {
            son=orta-1;
        }
        if(ara>A[orta])
        {
            bas=orta+1;
        }
    }
    if(l==-5)
        cout<<"aradiğiniz sayi bulunamadi";
    else
        cout<<"aradiğiniz sayi"<< l <<endl;
}
