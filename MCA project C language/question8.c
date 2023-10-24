/*Write a c program to find out the sum of series.*/
/*#include<stdio.h>
int main()
{
	int n,i;
	int sum=0;
	printf("Enter the maximum values of series: ");
	scanf("%d",&n);
	sum = (n * (n + 1)) / 2;
	printf("Sum of the series: ");
	for (i =1;i <= n;i++) {
		if (i!=n)
		             printf("%d + ",i); else
		             printf("%d = %d ",i,sum);
	}
	return 0;
}                  */

#include<stdio.h>
void main()
{
	int n,i;
	int sum=0;
	printf("Enter the maximum values of series: ");
	scanf("%d",&n);
	
	printf("Series: ");
	for (i =1;i != n;i++)
    {
		printf("%d , ",i);	            
	} 
    printf("%d",n);
    printf("\nThe sum of series= ");
    sum = (n * (n + 1)) / 2;
    printf("%d",sum);
	return 0;
}        


