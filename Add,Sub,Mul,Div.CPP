#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();

int a=10,b=3,c,r;
float d;
clrscr();

printf("The value of a is %d",a);
printf("\nThe valuse of B is %d",b);

c=a+b;
printf("\nSum is %d\n",c);

c=a-b;
printf("Subtraction is %d\n",c);
printf("Multiplication is %d",a*b);

d=a/b;
printf("\nDivision is %.4f",d);

r=a%b ;
printf("\nRemainder is %d",r);

getch();
}