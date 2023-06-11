#include <stdio.h>
#include <conio.h>


int main()
{
 int Numbers[5]={65,12,55,72,62};
 int i,Max,Min;

 clrscr();

 Max=Min=Numbers[0];

 for(i=1;i<5;i++)
 {
  if(Numbers[i]>Max) Max=Numbers[i];
  if(Numbers[i]<Min) Min=Numbers[i];

 }

 printf("The Min=%d\n",Min);
 printf("The Max=%d",Max);

 getch();
 return 0;
}