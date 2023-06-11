#include<stdio.h>
#include<conio.h>

int main()
{
 int X;
 int Y;
 int Sum;

 clrscr();

 printf("Enter The First Number To Sum: ");
 scanf("%d", &X);

 printf("Enter The Second Number To Sum: ");
 scanf("%d", &Y);

 Sum = X + Y;

 printf("The Sum : %d", Sum);

 getch();
 return 0;

}