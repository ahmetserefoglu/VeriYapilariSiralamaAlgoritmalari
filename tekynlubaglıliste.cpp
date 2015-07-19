#include<iostream>
#include <stdio.h>
#include <stdlib.h>
class LISTE {
struct dugum
{
int veri;
dugum *sonra;
};
dugum *ilk,*son;
dugum* DugumGonder (int);
public:
LISTE () {
ilk=NULL;
son=NULL;
}
LISTE (int x) {
ilk = new dugum;
ilk->veri=x;
ilk->sonra=NULL;
son=ilk;
}
void dugumEkle(int x);
int BuyukleriTopla (int);
int KactaneVar (int);
void ArayaEkle (int,int);
};
void LISTE::dugumEkle(int x)
{
    LISTE *p=(LISTE *)malloc(sizeof(struct LISTE));
if(x!=NULL){
if(ilk==NULL){
ilk=x; son=x;
ilk->p=NULL; son->p=NULL;
}else{
son->p=x; son=x;
x->p=NULL;
}}
}
int LISTE::BuyukleriTopla (int n)
{
dugum *d=new dugum;
int toplam=0;
d = ilk;
while(d)
{
if(d->veri>n)
toplam+=d->veri;
d=d->sonra;
}
return toplam;
}
int LISTE::KactaneVar (int n)
{
dugum *d=new dugum;
int sayac=0;
d = ilk;
while(d)
{
if(d->veri==n)
sayac++;
d=d->sonra;
}
return sayac;
}
LISTE::dugum* LISTE::DugumGonder (int n)
{
dugum *d=new dugum;
d = ilk;
while(d)
{
if(d->veri==n)
return d;
d=d->sonra;
}
return NULL;
}
void LISTE::ArayaEkle (int x,int y)
{
dugum *tmp = DugumGonder(x);
if(tmp==NULL|| tmp==son)
dugumEkle(y);
else
{
dugum *yeni = new dugum;
yeni->veri=y;
dugum *gecici = tmp->sonra;
tmp->sonra=yeni;
yeni->sonra=gecici;
}
}
main()
{
    return 0;
}
