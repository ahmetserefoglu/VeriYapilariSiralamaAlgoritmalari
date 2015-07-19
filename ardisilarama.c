#include<iostream.h>

ardisilarama(int A[],int N,int aranacaksayi)
{
    int i;
    for(i=0;i<N;i++)
    {
        if(A[i]==aranacaksayi)
        {
            return i;

        }
        return -1;

    }
}
int main()
{
    int B[]={12,10,25,23,65,98,56,24};
    int indis;
    int ara;
    cout<<"aranacak sayi:";
    cin>>ara;
    indis=ardisilarama(B,7,ara);
    if(indis==-1)
        cout<<"aranan sayi bulunamadi!";
    else
        cout<<"aranan sayi bulundu "<< indis <<" li elemendir";
    return 0;
}
