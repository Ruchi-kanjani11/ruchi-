#include<stdio.h>
#include<conio.h>
void main()
{
	float PI = 3.14;
	int r,pc;
	clrscr();
	printf("\n enter redius :-");
	scanf("%d",&r);
	pc = 2*PI*r;
	printf("perimeter of the circle:- %d",pc);
	getch();
	}