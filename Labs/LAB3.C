#include <stdio.h>;
#include <conio.h>;

int main()
{
 int Num1 , Num2 , Num3 , Num4  , Num5 , Max , Min;

 clrscr();

 printf("Enter First Number:");
 scanf("%d",&Num1);

 printf("Enter Second Number:");
 scanf("%d",&Num2);

 printf("Enter Third Number:");
 scanf("%d",&Num3);

 printf("Enter Fourth Number:");
 scanf("%d",&Num4);

 printf("Enter Fifth Number:");
 scanf("%d",&Num5);

 Max = Num1;
 Min = Num1;

 if(Max > Num2)
 {
   if(Num2 < Min)
   {
     Min = Num2;
   }
 }
 else
 {
   Max = Num2;
 }

 if(Max > Num3)
 {
   if(Num3 < Min)
   {
     Min = Num3;
   }
 }
 else
 {
   Max = Num3;
 }

 if(Max > Num4)
 {
   if(Num4 < Min)
   {
     Min = Num4;
   }
 }
 else
 {
   Max = Num4;
 }

 if(Max > Num5)
 {
   if(Num5 < Min)
   {
     Min = Num5;
   }
 }
 else
 {
   Max = Num5;
 }

 printf(" Min Number = %d",Min);
 printf(" Max Number = %d",Max);

 getch();
 return 0;
}