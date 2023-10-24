/*Write a program for sum of digits*/
#include<stdio.h>
void main()
{
    int n, m, sum ;
    printf("Enter the numbers: ");
    scanf("%d",&n);
    while (n>0)
    {
        m = n%10;
        sum = sum + m;
        n = n/10;
    }
    printf("sum = %d",sum);
    return 0;
}


