#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int *p,i,n,sum=0;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    printf("Enter Elements in the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        sum=sum+(*(p+i));
    }
    printf("sum = %d",sum);
    free(p);
    p=NULL;
    return 0;
}
