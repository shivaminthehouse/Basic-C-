#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int l,b,h,v;
printf("Enter the value of 1:\n");
scanf("%d",&l);

printf("Enter the value of b:\n");
scanf("%d",&b);

printf("Enter the value of h:\n");
scanf("%d",&h);

v=l*b*h;

printf("Volume of cube:%d",v);
getch();
}