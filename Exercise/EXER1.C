#include <stdio.h>
#include <conio.h>


int main()
{
 int x;
 int* y;

 clrscr();

 x=5;
 y=&x;

 //print the address of x
 printf("%p",&x);
 printf("%p", y);

 //print the address of y
 printf("%p", &y);

 getch();
 return 0;
}