#include <stdio.h>
#include <conio.h>

void Swap(int x,int y);

int main()
{
 int A=3,B=4;

 clrscr();

 Swap(A,B);

 printf("A=%d ,B=%d",A,B);

 getch();
 return 0;
}

void Swap(int x,int y)
{
 int temp;
 temp=x;
 x=y;
 y=temp;
}