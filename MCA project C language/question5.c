/*Write a program reverse of digit*/
#include<stdio.h>
void main()
{
    int n, reverse=0,last_digit;
    printf("Enter numbers: ");
    scanf("%d",&n);
    while (n!=0)
    {
        last_digit= n % 10;
        reverse = reverse * 10 + last_digit;
        n=n/10;
    }
    printf("reverse numbers= %d",reverse);
    return 0;
}