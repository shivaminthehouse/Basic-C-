#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,sum;
printf("Enter first integers:");
scanf("%d",&a);
printf("Enter secound integers:");
scanf("%d",&b);
sum=a+~b+1;
printf("Difference of two integers:%d",sum);
getch();
}
