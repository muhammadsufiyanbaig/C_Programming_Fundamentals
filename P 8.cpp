#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter a number between 1 to 3: ");
	scanf("%d", &a);
	switch(a)
	{
		case 1:
		printf("\nYou entered one.");
		break;
		case 2:
		printf("\nYou entered two.");
		break;
		case 3:
		printf("\nYou entered three.");
		break;
		default:
		printf("\nError!!!");
	}
	getch();
}
