#include <STDIO.H>
#include <CONIO.H>
#include <STDDEF.H>



int main()
{
 int Num,*Pnum=NULL;

 Num = 10;
 Pnum= &Num;

 clrscr();

 printf("The number's address:%p\n",&Num);
 printf("The number's value:%d\n",Num);


 printf("The pointer's address:%p\n",&Pnum);
 printf("The pointer's size:%d\n",sizeof(Pnum));
 printf("The pointer points variable of address:%p\n",Pnum);
 printf("The pointer points variable of value:%d",*Pnum);


 getch();
 return 0;
}