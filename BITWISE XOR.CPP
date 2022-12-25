#include <stdio.h>
#include<conio.h>
   void main()
 {
 clrscr();
     long i, k;
     printf("Enter first integers:");
     scanf("%ld", &i);

     printf("Enter Secound integers:");
     scanf("%ld",&k);
     printf(" Before swapping \ni= %ld\nk = %ld", i, k);
     i = i ^ k;
     k = i ^ k;
     i = i ^ k;
     printf(" After swapping  \ni= %ld\nk = %ld", i, k);
     getch();
 }