#include <STDIO.H>
#include <CONIO.H>

void calcSquare(int *num);

int main()
{
 int num;

 clrscr();

 printf("Enter number to calculaate square to:");
 scanf("%d",&num);

 calcSquare(&num);

 printf("Square=%d",num);

 getch();
 return 0;
}


void calcSquare(int *num)
{
 *num*=(*num);
 return;
}