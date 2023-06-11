#include <stdio.h>
#include <conio.h>
#define YADD 1
#define YSUBTRACT 2
#define YMULTIPLY 3
#define YDIVIDE 4
#define YEXIT 5


int GetFirstNumber(void);
int GetSecondNumber(void);
int Add(int a,int b);
int Subtract(int a,int b);
int Multiply(int a,int b);
int Divide(int a,int b);
void PrintMenu(void);
void ChangeColor(int y);

int main()
{
 int App=1,Char,Y=1,Num1,Num2,Result;

 clrscr();

 PrintMenu();

 gotoxy(1,Y);

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
     ChangeColor(Y);
     break;

    case 80:
     Y= Y+1;
     if(Y>5)Y=5;
     ChangeColor(Y);
     break;

    case 71:
     Y= 1;
     ChangeColor(Y);
     break;

    case 79:
     Y= 5;
     ChangeColor(Y);
     break;
   }
   gotoxy(1,Y);
  }
  else
  {
   if(Char==13)
   {

    switch(Y)
    {
     case YADD:
      gotoxy(25,25);
      Num1=GetFirstNumber();
      gotoxy(25,26);
      Num2=GetSecondNumber();
      Result=Add(Num1,Num2);
      gotoxy(25,27);
      cprintf("The Result= %d",Result);
      break;

     case YSUBTRACT:
      gotoxy(25,25);
      Num1=GetFirstNumber();
      gotoxy(25,26);
      Num2=GetSecondNumber();
      Result=Subtract(Num1,Num2);
      gotoxy(25,27);
      cprintf("The Result= %d",Result);
      break;

     case YMULTIPLY:
      gotoxy(25,25);
      Num1=GetFirstNumber();
      gotoxy(25,26);
      Num2=GetSecondNumber();
      Result=Multiply(Num1,Num2);
      gotoxy(25,27);
      cprintf("The Result= %d",Result);
      break;

     case YDIVIDE:
      gotoxy(25,25);
      Num1=GetFirstNumber();
      gotoxy(25,26);
      Num2=GetSecondNumber();
      Result=Divide(Num1,Num2);
      gotoxy(25,27);
      cprintf("The Result= %d",Result);
      break;

     case YEXIT:
      App= 0;
      break;

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

int GetFirstNumber(void)
{
 int a;
 printf("Get First Number:");
 scanf("%d",&a);
 return a;
}

int GetSecondNumber(void)
{
 int b;
 printf("Get Second Number:");
 scanf("%d",&b);
 return b;
}

int Add(int a,int b)
{
 int result= a + b;
 return result;
}

int Subtract(int a,int b)
{
 int result= a - b;
 return result;
}

int Multiply(int a,int b)
{
 int result= a * b;
 return result;
}

int Divide(int a,int b)
{
 int result= a / b;
 return result;
}

void PrintMenu()
{
 gotoxy(1 , YADD);
 printf("1-Add");
 gotoxy(1 ,YSUBTRACT);
 printf("2-Subtract");
 gotoxy(1 , YMULTIPLY);
 printf("3-Multiply");
 gotoxy(1 , YDIVIDE);
 printf("4-Divide");
 gotoxy(1 , YEXIT);
 printf("5-Exit");
}

void ChangeColor(int y)
{
  switch(y)
  {
   case YADD:
    clrscr();
    PrintMenu();
    gotoxy(1 , y);
    textcolor(GREEN);
    textbackground(RED);
    cprintf("1-Add");
    textbackground(BLACK);
    textcolor(WHITE);
    break;

   case YSUBTRACT:
    clrscr();
    PrintMenu();
    gotoxy(1 , y);
    textcolor(GREEN);
    textbackground(RED);
    cprintf("2-Subtract");
    textbackground(BLACK);
    textcolor(WHITE);
    break;

   case YMULTIPLY:
    clrscr();
    PrintMenu();
    gotoxy(1 , y);
    textcolor(GREEN);
    textbackground(RED);
    cprintf("3-Multiply");
    textbackground(BLACK);
    textcolor(WHITE);
    break;

   case YDIVIDE:
    clrscr();
    PrintMenu();
    gotoxy(1 , y);
    textcolor(GREEN);
    textbackground(RED);
    cprintf("4-Divide");
    textbackground(BLACK);
    textcolor(WHITE);
    break;

   case YEXIT:
    clrscr();
    PrintMenu();
    gotoxy(1 , y);
    textcolor(GREEN);
    textbackground(RED);
    cprintf("5-Exit");
    textbackground(BLACK);
    textcolor(WHITE);
    break;
  }

}