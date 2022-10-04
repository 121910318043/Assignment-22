#include<stdio.h>
#include<stdlib.h>
char* adrs();
int main()
{
    char *q;
    int i;
    q = adrs();
    for(i=0;*(q+i);i++)
    {
        printf("%c",*(q+i));
    }
    free(q);
    //q becomes a dangling pointer after releasing the memory of DMA variable (DMA Variable is not a local variable so it can be released anywhere in the program).
    for(i=0;*(q+i);i++)
    {
        printf("%c",*(q+i));
    }
    return 0;
}
char* adrs()
{
    char *p;
    p = (char*)malloc(30);
    printf("Enter a string ");
    fgets(p,30,stdin);
    return p;
}

