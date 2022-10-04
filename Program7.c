#include<stdio.h>
#include<stdlib.h>
void f1();
int main()
{
    f1();
    return 0;
}
void f1()
{
    int *p;
    p=(int*)malloc(sizeof(int));
    *p=30;
}
