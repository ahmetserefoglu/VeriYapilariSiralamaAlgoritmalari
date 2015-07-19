#include <stdio.h>
#include <conio.h>

struct btreenode
{
    struct btreenode *leftchild ;
    int data ;
    struct btreenode *rightchild ;
} ;

void insert ( struct btreenode **, int ) ;
void inorder ( struct btreenode * ) ;

int main( )
{
    struct btreenode *bt ;
    int arr[20], arr1[20];
    int i, num, j ;
    bt = NULL ;

    printf("\nDizinin uzunluðunu giriniz : ");
    scanf("%d",&num);
    printf("\nSýralanacak elemanlarý bir birden giriniz: \n");
    for(i=0;i < num;i++)
    {
                      scanf("%d",&arr[i]);
                      arr1[i]=arr[i];
                      }
    printf ( "\nSýralanmadan önce:\n" ) ;
    for ( i = 0 ; i < num ; i++ )
        printf ( "%d\t", arr[i] ) ;

    for ( j = 0 ; j < num ; j++ )
        insert ( &bt, arr1[j] ) ;

    printf ( "\nÝkili aðacý simetri olarak geçelim:\n" ) ;
    inorder ( bt ) ;

    getch( ) ;
}
// Bu fonksiyon aðacýn temel özelliklerini saklayarak elemaný yerleþtirir.
void insert ( struct btreenode **sr, int num1 )
{
    if ( *sr == NULL )
    {
        *sr = malloc ( sizeof ( struct btreenode ) ) ;

        ( *sr ) -> leftchild = NULL ;
        ( *sr ) -> data = num1 ;
        ( *sr ) -> rightchild = NULL ;
    }
    else
    {
        if ( num1 < ( *sr ) -> data )
            insert ( &( ( *sr ) -> leftchild ), num1 ) ;
        else
            insert ( &( ( *sr ) -> rightchild ), num1 ) ;
    }
}
// Simetri olarak aðacý geçen fonksiyon.
void inorder ( struct btreenode *sr )
{
    if ( sr != NULL )
    {
        inorder ( sr -> leftchild ) ;
        printf ( "%d\t", sr -> data ) ;
        inorder ( sr -> rightchild ) ;
    }
}
