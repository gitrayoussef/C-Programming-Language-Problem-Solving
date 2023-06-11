#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{

 char Fname[20],Lname[10];

 clrscr();

 printf("Enter First Name:");
 scanf("%s",&Fname);

 printf("Enter Second Name:");
 scanf("%s",&Lname);

 strcat(Fname," ");
 strcat(Fname,Lname);

 gotoxy(1,4);
 printf("Fullname:%s",Fname);

 getch();
 return 0;
}