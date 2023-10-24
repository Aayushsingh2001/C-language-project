/*Write a program to find factorial of any numbe.*/

#include<stdio.h>
void main()
{
    int number,factorial=1;
    printf("Enter a number: ");
    scanf("%d",&number);
    for (int i = 1; i <= number; i++)
    {
        factorial = factorial*i;
    }
    printf("the factorial of %d is %d: ",number,factorial);
    return 0;
}