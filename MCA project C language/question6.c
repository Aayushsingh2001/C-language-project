/*write a program to check whether input number is prime or not*/
#include<stdio.h>  
void main()
{
    int n,i,m=0,flag=0;    
    printf("Enter the number: ");    
    scanf("%d",&n);    
    m=n/2;    
    for(i=2;i<=m;i++)    
    {    
      if(n%i==0)    
       {    
         printf("%d is not prime.",n);    
         flag=1;    
          break;    
        }    
    }    
    if(flag==0)    
    {
        printf("%d is prime.",n);
    }     
    return 0;  
}    