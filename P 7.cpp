#include<stdio.h>
#include<conio.h>
using namespace std;
double cube(int a);
int main()
{
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	cube(x);
	getch();
}
double cube(int a)
{
	int b;
	b = a*a*a;
	printf("\nThe cube of the given number is: %d", b);
}
