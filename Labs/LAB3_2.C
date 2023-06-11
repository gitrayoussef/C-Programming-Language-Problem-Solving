#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
 double A , B , C , X1 , X2 , D;

 clrscr();

 printf("Enter value of A: ");
 scanf("%lf" , &A);

 printf("Enter value of B: ");
 scanf("%lf" , &B);

 printf("Enter value of C: ");
 scanf("%lf" , &C);

 D = (B * B) - (4 * A * C);

 if(D < 0)
  {
   printf("The Equation have no real roots");
  }
 else
 {
   x1 = ( -B + sqrt(D)) / (2 * A);
   x2 = ( -B - sqrt(D)) / (2 * A);
   printf("The roots are %.2lf , %.2lf" , X1 , X2);

 }


 getch();
 return 0;

}
