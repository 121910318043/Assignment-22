#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*p;
    printf("Enter n value ");
    scanf("%d",&n);
    if(n%4)
    {
        n=n+4-n%4;
    }
    printf("enter %d values: ",n/4);
    p = (int*)malloc(n);
    if(p==NULL)
    {
        printf("Memory Allocation failed");
        return 0;
    }
    for(i=0;i<n/4;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n/4;i++)
    {
        printf("%d ",*(p+i));
    }
    free(p);
    return 0;
}
