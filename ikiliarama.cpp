#include<iostream>
using namespace std;
int ikiliarama(int A[],int N,int aranansayi)
{
    int sol=0,sag=N-1,ortadaki;
    while(sol<=sag)
    {
        ortadaki=(sol+sag)/2;
        if(aranansayi==A[ortadaki])
            return ortadaki;
        else if(aranansayi>A[ortadaki])
        sol=ortadaki+1;
        else
            sag=ortadaki-1;

    }
    return -1;
}
int main()
{
    int B[]={12,14,18,19,56,27};
    int indis;
    int ara;
    for(int i=0;i<5;i++)
    {
        cout<<B[i]<<"\n";
    }
    cout<<"aranacak sayi :";
    cin>>ara;

    indis=ikiliarama(B,5,ara);
    if(indis==-1)
        cout<<"bulunamadi";
    else
        cout<<"aradiginiz sayinin indisi "<< indis;
}
