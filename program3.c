#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,s=0,n,i;
    printf("Enter number of values to be entered: ");
    scanf("%d",&n);
    p = (int*)malloc(sizeof(int)*n);
    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        s=s+*(p+i);
    }
    printf("sum of numbers = %d",s);
    return 0;
}
