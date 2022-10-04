#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    int i=1,j=0;
    char *p;
    p = (char*)malloc(sizeof(char));
    printf("Enter the string: ");
    while(ch!='\n'){
        ch=getc(stdin);
        i++;
        p=realloc(p,i*sizeof(char));
        *(p+j)=ch;
        j++;
    }
    *(p+j)='\0';
    printf("%s",p);
    free(p);
    p = NULL;
    return 0;
}
