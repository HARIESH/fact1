#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,fact=1;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
	
	fact=fact*i;
	}
	printf("Fact %d",fact);
	getch();
	
}