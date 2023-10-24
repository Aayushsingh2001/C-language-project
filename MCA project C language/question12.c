/*Write a program to find factoriaal of a number using recursion*/ 
#include<stdio.h>  
long factorial();
void main()  
{  
  int number;  
  long fact;  
  printf("Enter a number: ");  
  scanf("%d", &number);   
   
  fact = factorial(number);  
  printf("Factorial of %d is %d\n", number, fact);  
  return 0;  
}
long factorial(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * factorial(n-1));  
}  
   
