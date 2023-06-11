#include <stdio.h>
#include <conio.h>


int main()
{
  int Col , Row , Value , Size;

  clrscr();

  printf("Insert Odd Number:");
  scanf("%d" , &Size);

   Row = 1;
   Col = (Size + 1)/2;
   Value = 1;
   gotoxy(Col*3 , Row+1);
   printf("%3d" , Value);

  while(Value < Size * Size)
  {
   if(Value%Size == 0)
   {
      Row++;

   }
   else
   {
     Row--;
     Col--;
     if(Col==0) Col=Size;
     if(Row==0) Row=Size;
   }

   gotoxy(Col*3 , Row+1);
   Value++;
   printf("%3d" , Value);

  }

  getch();
  return 0;

}

