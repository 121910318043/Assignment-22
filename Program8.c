#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p = (int*)malloc(sizeof(int));
    free(p);
    printf("%d",*p);
    return 0;
}
