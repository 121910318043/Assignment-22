#include<stdio.h>
#include<stdlib.h>
/*Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.*/
float average(int);
int main()
{
    int n;
    printf("Enter number of data values to enter in the array: ");
    scanf("%d",&n);
    printf("average = %0.3f",average(n));
    return 0;
}
float average(int n)
{
    int *p,i,s=0;
    p=(int*)calloc(n,sizeof(int));
    printf("Enter %d elements in the array: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        s=s+*(p+i);
    }
    free(p);
    return (float)s/n;
}
