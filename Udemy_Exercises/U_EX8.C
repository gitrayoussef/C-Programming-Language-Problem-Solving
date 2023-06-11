#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

static void forcefloat(float *p);

struct employee
{
 char *name;
 struct
 {
  int day;
  int month;
  int year;
 } hireDate;
 float salary;
};

void empData(struct employee *pEm);

void printEmpData(struct employee em);

int main()
{
 int i;

 struct employee employees[3]={{"Rana",{20,10,2023},250.00f}};

 struct employee *pEm;

 clrscr();

 for(i=1;i<3;i++)
 {
  pEm=&employees[i];
  empData(pEm);
 }


 for(i=0;i<3;i++)
 {
  printEmpData(employees[i]);
 }

 getch();

 free(pEm->name);

 return 0;
}

void empData(struct employee *pEm)
{
 int size = 10;

 pEm->name=(char *)malloc(size*sizeof(char));

 if(pEm->name)

 {
  printf("Enter Employee's Name: ");
  scanf("%s",pEm->name);

  printf("Enter Employee's Hire Day: ");
  scanf("%d",&(pEm->hireDate.day));

  printf("Enter Employee's Hire Month: ");
  scanf("%d",&(pEm->hireDate.month));

  printf("Enter Employee's Hire Year: ");
  scanf("%d",&(pEm->hireDate.year));

  printf("Enter Employee's Salary: ");
  scanf("%f",&(pEm->salary));
 }

 return;
}

void printEmpData(struct employee em)
{
 printf("\n\nName:%s,HireDate:%d-%d-%d,Salary:%.2f\n"
	,em.name,em.hireDate.day,em.hireDate.month,em.hireDate.year,em.salary);

 return;
}

static void forcefloat(float *p)
{
 float f =*p;
 forcefloat(&f);
}