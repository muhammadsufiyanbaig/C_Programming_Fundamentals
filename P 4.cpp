#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b, c;
	printf("Enter the table number: ");
	scanf("%d", &a);
	for (b=1; b<=10; b++)
	{
		c = a*b;
		printf("%d x %d = %d\n", a, b,  c);
	}
	getch();
} 
