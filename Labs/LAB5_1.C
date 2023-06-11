#include <stdio.h>
#include <conio.h>

int main()
{
 int Char;
 clrscr();
 Char = getch();

 if(Char == 0)
 {
  Char = getch();
  printf("You Entered Extended Key With ASCII= %d",Char);

 }
 else
 {

  printf("You Entered Normal Key With ASCII= %d",Char);

 }

 getch();
 return 0;
}