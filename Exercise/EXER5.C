#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
 float* ptr;
 ptr=malloc(sizeof(float));

 clrscr();

 if(ptr != NULL)
 {
  scanf("%f",ptr);
  printf("%f",*ptr);
 }


 getch();
 return 0;
}

