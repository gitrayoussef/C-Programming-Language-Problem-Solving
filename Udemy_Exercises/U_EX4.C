#include <STDIO.H>
#include <CONIO.H>
#include <STRING.H>

int main()
{
 char name[]="rana";
 int i;
 char *pName=name;

 clrscr();

 for(i=0;i<strlen(name);i++)
 {
  printf("Value of name[%d]:%c,*(pName+%d):%c    Address of &name[%d]:%p,(pName+%d):%p\n"
  ,i,name[i],i,*(pName+i),i,&name[i],i,pName+i);
 }

 getch();

 return 0;
}