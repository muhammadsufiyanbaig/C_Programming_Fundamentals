#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter any number: ");
    scanf("%d",&a);
    for(b=2;b<=a;b++)
    {
    if(a%b==0)
    break;
    }
    if(a==b)
    printf("\n%d is a prime number",a);
    else
    printf("\n%d is not a prime number",a);
    getch();
}
