 /*Write a program to print fibonacci series.*/

#include<stdio.h>
void main()
{
    int n1=0, n2=1, n3, number;
    printf("Enter the number of element of fibonacci series: ");
    scanf("%d",&number);
    printf("\n%d %d",n1,n2);
    for(int i=2;i<number;i++)
    {
        n3 = n1 + n2;
        printf(" %d",n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}