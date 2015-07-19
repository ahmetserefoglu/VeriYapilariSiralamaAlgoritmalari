#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* D���m Yap�s� */
struct treenode {
  struct treenode *leftptr;
  int data;
  struct treenode *rightptr;
};

typedef struct treenode TREENODE;
typedef struct treenode * TREENODEPTR;

// A�aca d���m eklemeyi sa�layan fonksiyon
TREENODEPTR dugumekle(TREENODEPTR treeptr, int veri)
{
  if(treeptr==NULL)
  {
    treeptr =(treenode *) malloc(sizeof(treenode));
    if (treeptr!=NULL)
    {
      treeptr->data = veri;
      treeptr->leftptr = NULL;
      treeptr->rightptr = NULL;
    }
    else printf("%d eklenemedi. Bellek yetersiz.\n",veri);
  }
  else
    if(veri<treeptr->data)
      treeptr->leftptr = dugumekle(treeptr->leftptr,veri);
    else
    if(veri>treeptr->data)
      treeptr->rightptr = dugumekle(treeptr->rightptr,veri);
    else printf("Dup");
    return treeptr;
}


/* A�ac�n inorder dola��lmas� */
void inorder(TREENODEPTR treeptr)
{
  if (treeptr != NULL) {
    inorder(treeptr->leftptr);
    printf("%3d",treeptr->data);
    inorder(treeptr->rightptr);
  };
}

/* A�ac�n preorder dola��lmas� */
void preorder(TREENODEPTR treeptr)
{
  if (treeptr != NULL) {
    printf("%3d",treeptr->data);
    preorder(treeptr->leftptr);
    preorder(treeptr->rightptr);
  };
}


/* A�ac�n postorder dola��lmas� */
void postorder(TREENODEPTR treeptr)
{
  if (treeptr != NULL) {
    postorder(treeptr->leftptr);
    postorder(treeptr->rightptr);
    printf("%3d",treeptr->data);
  };
}


int main()
{
  int i, item;
  TREENODEPTR treeptr = NULL;

  srand(time(NULL));

  /* A�aca yerle�tirilecek say�lar */
  printf("\n\n");
  for(i=0; i<15; ++i)
  {
    item = rand() % 10;
    printf("%3d ", item);
    printf("%3d ", item);
    treeptr = dugumekle(treeptr, item);
  };
  printf("\n");

  /* A�ac�n preorder dola��lmas� */
  printf("A�ac�n preorder dola��lmas�  :\n");
  preorder(treeptr); printf("\n");
  /* A�ac�n inorder dola��lmas� */
  printf("A�ac�n inorder dola��lmas�   :\n");
  inorder(treeptr); printf("\n");
  /* A�ac�n postorder dola��lmas� */
  printf("A�ac�n postorder dola��lmas� :\n");
  postorder(treeptr); printf("\n");

}
