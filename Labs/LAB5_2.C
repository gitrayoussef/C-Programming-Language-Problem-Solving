#include <stdio.h>
#include <conio.h>

int main()
{
 int App=1,Char,X=1,Y=1;
 int Edit=Y,Search=Y+1,Save=Y+2,Exit=Y+3;

 clrscr();

 gotoxy(X , Edit);
 printf("Edit");
 gotoxy(X , Search);
 printf("Search");
 gotoxy(X , Save);
 printf("Save");
 gotoxy(X , Exit);
 printf("Exit");

 gotoxy(X,Y);

 while(App!=0)
 {

  Char= getch();

  if(Char==0)
  {
   Char = getch();

   switch(Char)
   {
    case 72:
     Y= Y-1;
     if(Y<1)Y=1;
     break;

    case 80:
     Y= Y+1;
     if(Y>4)Y=4;
     break;

    case 71:
     Y= 1;
     break;

    case 79:
     Y= 4;
     break;
   }
   gotoxy(X,Y);
  }
  else
  {
   if(Char==13)
   {
    if(Y==Edit)
    {
     gotoxy(25,25);
     printf("You Entered Edit Button");
    }
    if(Y==Search)
    {
     gotoxy(25,25);
     printf("You Entered Search Button");
    }
    if(Y==Save)
    {
     gotoxy(25,25);
     printf("You Entered Save Button");
    }
   }

   if(Char==27)
   {
    App= 0;
   }
  }
 }

 return 0;
}