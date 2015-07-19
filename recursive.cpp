#define LIMIT 1000
#include<stdlib.h>
#include<stdio.h>
void fun2(int n) {
if (n <= 0)
return;
if (n > LIMIT)
return ;
printf("%d ", n);
fun2(2*n);
printf("%d ", n);
}
main()
{
    fun2(100);
}
