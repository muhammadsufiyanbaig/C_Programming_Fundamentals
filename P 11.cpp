#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b, c, d;
	printf("Enter any three numbers\n");
	scanf("%d%d%d", &a, &b, &c);
	if(a>b && a>c)
	d = a;
	else if(b>a && b>c)
	d = b;
	else
	d = c;
	printf("The largest number is: %d", d);
	getch();
}
