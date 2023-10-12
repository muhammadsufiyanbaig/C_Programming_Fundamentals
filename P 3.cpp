#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.141
int main()
{
	int a, b, r;
	float s, t;
	printf("Enter altitude of triangle: ");
	scanf("%d", &a);
	printf("\nEnter base of triangle: ");
	scanf("%d", &b);
	printf("\nEnter radius of sphere: ");
	scanf("%d", &r);
	t = (1.0/2.0)*(a*b);
	s = (4.0/3.0)*pi*pow(r,3);
	if(t>s)
	{
		printf("\nThe area of triangle is= %f\n", t);
		printf("\nThe volume of sphere is= %f\n", s);
	}
	else
	{
		printf("\nThe volume of sphere is= %f\n", s);
		printf("\nThe area of triangle is= %f\n", t);
	}
	getch();
} 
