#include <stdio.h>
#include <conio.h>

int main()
{
 int Counter , Step , Num , Min , Max;

 clrscr();


 printf("Enter Number Of Numbers\n");
 scanf("%d", &Counter);

 Step = 1;
 printf("Enter %d number\n", Step);
 scanf("%d", &Num);
 Min = Num;
 Max = Num;

 for(Step=2;Step<=Counter;Step++)
 {

  printf("Enter %d number\n", Step);
  scanf("%d", &Num);

  if(Num > Max)
  {

    Max = Num;

  }
  if(Num < Min)
  {

    Min = Num;

  }

 }

 printf("Max = %d , Min = %d" , Max , Min);

 getch();
 return 0;

}