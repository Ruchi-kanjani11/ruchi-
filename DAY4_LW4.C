#include<stdio.h>
#include<conio.h>
void main()
{
	int b,h;
	float t;
	clrscr();
	printf("\n enter base :-");
	scanf("%d",&b);
	printf("\n enter hight :-");
	scanf("%d",&h);

	t = 0.5*b*h;
	printf("\n area of triangle :- %f",t);
	getch();
	}