/*Write a program to exchange the value of two variables without usingh third variable.*/

#include<stdio.h>
void main()
{
    int a=10, b=20;
    printf("Before swaping a=%d, b=%d\n",a,b);
    a = a + b;  //a=30 (a+b=30=a)
    b = a - b;  //b=10 (a-b=10=a)
    a = a - b;  //a=20 (a-b=20=b)
    printf("After swaping a=%d,b=%d",a,b);
    return 0;
}