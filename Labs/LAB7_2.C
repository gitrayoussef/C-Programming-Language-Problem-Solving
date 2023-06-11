#include <stdio.h>
#include <conio.h>

int main()
{

 int arr[3][4];
 int Col,Row,Sum=0;
 float Avg=0;

 clrscr();

 for(Row=0;Row<3;Row++)
 {
  printf("Enter Student %d Degrees\n",Row+1);
  for(Col=0;Col<4;Col++)
  {
   printf("Enter Subject %d Degree=",Col+1);
   scanf("%d",&arr[Row][Col]);

   Sum+=arr[Row][Col];
  }
  printf("The Sum=%d\n",Sum);
  Sum=0;
 }

 for(Col=0;Col<4;Col++)
 {
  for(Row=0;Row<3;Row++)
  {
   Avg+=arr[Row][Col];
  }
  Avg/=3;
  printf("Subject %d Avg=%.2lf\n",Col+1,Avg);
  Avg=0;
 }



 getch();
 return 0;
}