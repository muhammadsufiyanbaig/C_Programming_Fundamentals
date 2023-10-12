#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b, f = 1;
	printf("Find factorial of the number: ");
	scanf("%d", &a);
	for(b=1; b<=a; b++)
	{
		f = f*b;
    }
    printf("\nThe factorial of %d is %d", a, f);
	getch();
}
