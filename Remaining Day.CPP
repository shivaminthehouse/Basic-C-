#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,r;
printf("Enter the value a:");
scanf("%d",&a);
b=a/30;
printf("Month:%d\n",b);
r=a%30;
printf("Remaining Days:%d",r);
getch();
}