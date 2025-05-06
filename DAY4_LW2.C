#include<stdio.h>
#include<conio.h>
void main()
{
	int p,n,si;
	float r;
	clrscr();
	printf("\n enter principal amount :-");
	scanf("%d",&p);
	printf("\n enter number of rate :-");
	scanf("%f",&r);
	printf("\n enter number of year :-");
	scanf("%d",&n);
	si = p*r*n/100;
	printf("\n simple interest :- %d",si);
	getch();
	}