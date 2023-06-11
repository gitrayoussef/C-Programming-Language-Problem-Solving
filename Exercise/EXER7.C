#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
 float* ptr;
 int i;
 ptr=(float*) malloc(5*sizeof(float));

 clrscr();

 if(ptr != NULL)
 {

  for(i=0;i<5;i++)
  {
   scanf("%f",&ptr[i]);

  }

  for(i=0;i<5;i++)
  {

   printf("%p",&ptr[i]);

  }

  free(ptr);

 }

 getch();
 return 0;
}

