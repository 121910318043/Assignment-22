#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*p,max=-99999,min=99999;
    printf("Enter Size of the array: ");
    scanf("%d",&n);
    p = (int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        if(min>*(p+i))
            min=*(p+i);
        if(max<*(p+i))
            max=*(p+i);
    }
    printf("Maximum in the array = %d\n",max);
    printf("Minimum in the array = %d",min);
    free(p);
    return 0;
}
