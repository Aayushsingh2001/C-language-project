/*Write a program to find whether a given number is existing or not in a given list.*/
#include<stdio.h>
void main()
{
 int n,m,flag=0; int a[10];

 printf("How many numbers you want to enter in the list: ");
 scanf("%d",&n);

 printf("Enter numbers in the list:\n");
 for (int i=0; i<n; i++)
 {
    scanf("%d", &a[i]);
 }

 printf("Enter the number you want to search: ");
 scanf("%d", &m);

 for (int i=0; i<n; i++)
  {
   if(a[i]==m)
   {
   flag=1;
   break;
   }
  }
 if(flag==0)
  printf("Not exist.......!");
 else
  printf("exist.......!");
}