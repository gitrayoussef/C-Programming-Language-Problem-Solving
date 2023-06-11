#include <STDIO.H>
#include <CONIO.H>
#include <STDLIB.H>
#include <STRING.H>

int main()
{
 char *ptr;

 clrscr();

 ptr=(char *)malloc(25 * sizeof(char));

 strcpy(ptr,"Hello");

 printf("String=%s,Address=%p\n",ptr,ptr);

 ptr=(char *)realloc(ptr,25 * sizeof(char));

 strcat(ptr," world");

 printf("String=%s,Address=%p\n",ptr,ptr);

 free(ptr);

 getch();
 return 0;
}