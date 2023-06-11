#include <STDIO.H>
#include <CONIO.H>

int calcStrLen(const char *pName1);

int main()
{
 char userInput[20];

 clrscr();

 printf("Enter string to calculate length:");

 scanf("%s",userInput);

 printf("Length=%d",calcStrLen(userInput));

 getch();
 return 0;
}

int calcStrLen(const char *pName1)
{

 const char *pName2 = pName1;

 while(*pName1)
  ++pName1;

 return pName1 - pName2;
}