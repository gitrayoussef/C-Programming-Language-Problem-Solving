#include <STDIO.H>
#include <CONIO.H>


int main()
{
 int i=5;
 char c='A';
 float f=2.55;

 void *p;

 clrscr();

 p=&i;
 printf("Value of integer i:%d\n",*((int *)p));

 p=&c;
 printf("Value of character c:%c\n",*((char *)p));

 p=&f;
 printf("Value of float f:%.2f\n",*((float *)p));

 getch();
 return 0;
}