#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Düðüm Yapýsý */
struct treenode {
  struct treenode *leftptr;
  int data;
  struct treenode *rightptr;
};

typedef struct treenode TREENODE;
typedef struct treenode * TREENODEPTR;

// Aðaca düðüm eklemeyi saðlayan fonksiyon
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


/* Aðacýn inorder dolaþýlmasý */
void inorder(TREENODEPTR treeptr)
{
  if (treeptr != NULL) {
    inorder(treeptr->leftptr);
    printf("%3d",treeptr->data);
    inorder(treeptr->rightptr);
  };
}

/* Aðacýn preorder dolaþýlmasý */
void preorder(TREENODEPTR treeptr)
{
  if (treeptr != NULL) {
    printf("%3d",treeptr->data);
    preorder(treeptr->leftptr);
    preorder(treeptr->rightptr);
  };
}


/* Aðacýn postorder dolaþýlmasý */
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

  /* Aðaca yerleþtirilecek sayýlar */
  printf("\n\n");
  for(i=0; i<15; ++i)
  {
    item = rand() % 10;
    printf("%3d ", item);
    printf("%3d ", item);
    treeptr = dugumekle(treeptr, item);
  };
  printf("\n");

  /* Aðacýn preorder dolaþýlmasý */
  printf("Aðacýn preorder dolaþýlmasý  :\n");
  preorder(treeptr); printf("\n");
  /* Aðacýn inorder dolaþýlmasý */
  printf("Aðacýn inorder dolaþýlmasý   :\n");
  inorder(treeptr); printf("\n");
  /* Aðacýn postorder dolaþýlmasý */
  printf("Aðacýn postorder dolaþýlmasý :\n");
  postorder(treeptr); printf("\n");

}
