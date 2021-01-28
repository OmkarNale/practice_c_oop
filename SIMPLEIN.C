#include<stdio.h>
#include<conio.h>
#define PERIAD 10
#define AMOUNT 5000
int main()
{
	int year;
	float amt,value,inte;
	amt=AMOUNT;
	inte=.11;
	year=0;
	printf("year\t\t\tamount\n;
	while(year<=PERIAD)
	{
	printf("%d\t\t\t%fp",year,amt);
	value=amt+inte*amt;
	year += 1;
	amt=value;
	}
 getch();
return 0;
}