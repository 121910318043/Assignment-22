#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,max=-99999,n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        if(max<*(p+i))
        {
            max=*(p+i);
        }
    }
    printf("Largest Element in the array = %d",max);
    free(p);
    p=NULL;
    return 0;
}
