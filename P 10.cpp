#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b, row = 4;
	for(a=row; a>=1; --a)
	{
		for(b=1; b<=a; ++b)
		{
		printf("%d", b);
		}
		printf("\n");
	}
	getch();
}
