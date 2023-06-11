#include <STDIO.H>
#include <CONIO.H>
#include <STDLIB.H>
#include <STDDEF.H>


int main()
{
 int size, app=1, key, x, y, i=0;
 char *str;

 clrscr();

 x=1;
 y=wherey();

 printf("Enter Text Size: ");
 scanf("%d",&size);
 size+=1;
 *(str+(size-1))=0;

 str=(char *)malloc(size * sizeof(char));

 if(str != NULL)
 {

  printf("Enter text\n");

  while(app)
  {
   key=getch();

   if(key==0) key=getch();

   switch(key)
   {
    case 75:
     x=i;
     gotoxy(x,y);
     i=i-1;
     break;

    case 77:
     x=i;
     gotoxy(x,y);
     i=i+1;
     break;

    case 13:
    case 27:
     gotoxy(15,25);
     printf("%s",str);
     app=0;
     break;

    case 8:
     if(i>0)
     {
      x=i;
      gotoxy(x,y);
      *(str+(i-1))=' ';
      printf("%c",' ');
      y=3;
      i=i-1;
     }
     break;

    case 32:
    default:
     if(i<size-1)
     {
       y=3;
       x=i+1;
       gotoxy(x,y);
       *(str+i)=key;
       printf("%c",key);
       i=i+1;
     }
     break;
   }
  }

  free(str);
 }

 getch();
 return 0;
}