#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define subjSize 3

struct student
{
 int id;
 char *name;
 int subjects[subjSize];
};

struct student fillStudent(struct student *std,int i);

void printStudent(struct student *std,int i);

int main()
{
 int studentsNum,i;
 struct student *students;

 clrscr();

 printf("Enter Students' Number: ");
 scanf("%d",&studentsNum);

 students=(struct student *)malloc(studentsNum*sizeof(struct student));



 for(i=0;i<studentsNum;i++)
 {
  students[i]=fillStudent(students+i,i);

 }

 for(i=0;i<studentsNum;i++)
 {

  printStudent(students+i,i);

 }


 getch();

 free(students);

 return 0;
}


struct student fillStudent(struct student *std,int i)
{
 int j;

 std->name=(char *)malloc(25*sizeof(char));

 printf("Enter student[%d]'s id: ",i+1);
 scanf("%d",&std->id);

 printf("Enter student[%d]'s name: ",i+1);
 scanf("%s",std->name);

 for(j=0;j<subjSize;j++)
 {
  printf("Enter student[%d]'s subject[%d] degree: ",i+1,j+1);
  scanf("%d",&(std->subjects[j]));
 }

 return *std;
}

void printStudent(struct student *std,int i)
{
 int j;

 printf("\n\n\n*************************************\n\n");

 printf("Student[%d]'s id: %d\n",i+1,std->id);

 printf("Student[%d]'s name: %s\n",i+1,std->name);

 for(j=0;j<subjSize;j++)
 {
  printf("Student[%d]'s subject[%d] degree: %d\n",i+1,j+1,std->subjects[j]);
 }

 free(std->name);
}
