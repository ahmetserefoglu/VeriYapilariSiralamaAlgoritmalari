#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,ara;
    int l=-1;
    int K[4];
    for(i=0;i<4;i++)
    {
    cout<<i<<"--sayi giriniz::";
    cin>>K[i];
    }


    cout<<"aranacak sayi giriniz:";
    cin>>ara;

    for(int j=0;j<4;j++)
    {
    if(K[j]==ara)

    l=j;

    }
    if(l!=-1)

        cout<<"aradiaginiz sayinin indisi"<<l+1<<" ve aradiðiniz sayi"<<K[l+1]<<endl;


    else
         cout<<"sayi bulunamadi";



    }




