#include<stdio.h>
#include<sys/time.h>
#include<stdlib.h>
void insertionsort(int *a,int n)
{
int i,j,k;
for(i=0;i<n;i++)
{
k=a[i];
j=i-1;
while(k<a[i]&&j>=0)
{
a[j+1]=a[j];
j--;
}
a[j+1]=k;
}
}
int main()
{
struct timeval s_time,e_time;
float rt;
FILE *fp=fopen("insertion.txt","w");
int *a,i,j;
printf("Insertion sort\n");
printf("'n' value\n");
printf("\t time in milisecond");
for(i=1000000;i<10000000;i+=1000000)
{
a=(int *)malloc(sizeof(int)*i);
for(j=0;j<i;j++)
{
a[j]=rand();
}
gettimeofday(&s_time,NULL);
insertionsort(a,i);
gettimeofday(&e_time,NULL);
rt=((e_time.tv_sec-s_time.tv_sec)*1000)+((e_time.tv_usec-s_time.tv_usec)/1000);
fprintf(fp,"\n%d\t%.01f",i,rt);
printf("\n%d\t%.01f",i,rt);
free(a);
}

fclose(fp);
return 0;
}
