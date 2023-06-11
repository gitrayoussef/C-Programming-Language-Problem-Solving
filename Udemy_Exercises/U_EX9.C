#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

static void forcefloat(float *p);

struct item
{
 char *itemName;
 int quantity;
 float price;
 float amount;
};

void readItem(struct item *pItem);

void printItem(struct item product);

int main()
{
 int i;

 struct item items[2],*pItem;

 clrscr();

 for(i=0;i<2;i++)
 {
  pItem=&items[i];
  readItem(pItem);
 }


 for(i=0;i<2;i++)
 {
  printItem(items[i]);
 }

 getch();

 free(pItem->itemName);

 return 0;
}

void readItem(struct item *pItem)
{
 int size = 25;

 pItem->itemName=(char *)malloc(size*sizeof(char));

 if(pItem->itemName)

 {
  printf("Enter Item's Name: ");
  scanf("%s",pItem->itemName);

  printf("Enter Item's Quantity: ");
  scanf("%d",&(pItem->quantity));

  printf("Enter Item's Price: ");
  scanf("%f",&(pItem->price));

  pItem->amount=(pItem->quantity)*(pItem->price);

 }

 return;
}

void printItem(struct item product)
{
 printf("\n\nProduct_Name:%s,Quantity:%d,Price:%.2f,amount:%.2f\n"
	,product.itemName,product.quantity,product.price,product.amount);

 return;
}

static void forcefloat(float *p)
{
 float f =*p;
 forcefloat(&f);
}