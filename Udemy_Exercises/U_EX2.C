#include <STDIO.H>
#include <CONIO.H>
#include <STDDEF.H>


int main()
{
 long num1=0L;
 long num2=0L;
 long *pNum=NULL;

 num1=3L;
 pNum=&num1;
 ++num1;
 *pNum+=num1;


 num2=5L;
 pNum=&num2;
 *pNum+=2;

 clrscr();

 printf("Num1=%ld,Num2=%ld,Sum=%ld",num1,num2,num1+num2);

 getch();
 return 0;
}