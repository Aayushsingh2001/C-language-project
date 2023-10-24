/*Write a program to check whether input number is armstrong number or not.*/
#include <stdio.h>
int main()
{
    int n, r, sum = 0, temp;
    printf("enter the number=");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (temp == sum)
        printf("This is armstrong  number.", n);
    else
        printf("This is not armstrong number.", n);
    return 0;
}