#include <stdio.h>

void arayasokma(int *dizi, int N);
void InsertionSort(int dizi[], int boyut);

int main()
{
    int N=10;
    int i;
    int D[10]={7,3,5,8,9,2,1,6,0,4};

    printf("\n siralamadan onceki dizi\n");
    for(i=0; i<=9; i++)
        printf("%d ",D[i]);

    /* arayasokma(D, N); */
    InsertionSort(D, N);

    printf("\n siralamadan sonraki dizi\n");
    for(i=0;i<=9;i++)
        printf("%d ",D[i]);
}

/*======================================*//* kasif kodu baslangici */
void InsertionSort(int dizi[], int boyut)
{
    int i, j, index;

    for (i=1; i<boyut; i++)
    {
        index = dizi[i];
        j = i;
        while ((j > 0) && (dizi[j-1] > index))
        {
            dizi[j] = dizi[j-1];
            j = j - 1;
        }
        dizi[j] = index;
    }
}
/*=====================================*//* kasif kodu sonu */

void arayasokma(int *dizi, int N)
{
    int i, k, ekle;

    for(i=1; i<N; i++)
    {
        ekle = dizi[i];
        for(k=i-1; k>=0 && ekle<=dizi[k]; k--)
            dizi[k+1] = dizi[k];
        dizi[k+1] = ekle;
    }
}
