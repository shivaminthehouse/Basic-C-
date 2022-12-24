#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int gs,bs,da,ta;
printf("Enter basic salary:");
scanf("%d",&bs);
da=(10*bs)/100;
ta=(12*bs)/100;
gs=bs+da+ta;
printf("gross salary=%d",gs);
getch();
}