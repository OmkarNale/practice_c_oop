#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\nEnter the a :");
	scanf("%d",&a);
	printf("\nEnter the b :");
	scanf("%d",&b);
	c=(a>b)?a:b;
	printf("\n c is %d",c);
getch();
}
