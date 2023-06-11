#include <stdio.h>
#include <conio.h>

int CalcPower(int a,int b);

int main()
{
 int A,B,Result;

 clrscr();

 printf("Enter The Number To Calculate The Power To:");
 scanf("%d",&A);

 printf("Enter The Power:");
 scanf("%d",&B);

 Result = CalcPower(A,B);

 printf("Result= %d",Result);

 getch();
 return 0;
}


int CalcPower(int a,int b)
{
 int i;
 int result=a;
 if(b==0) result=1;
 for(i=2;i<=b;i++)
 {
  result*=a;
 }
 return result;

}