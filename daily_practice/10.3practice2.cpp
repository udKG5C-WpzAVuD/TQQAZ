#include <stdio.h>
int main()
{
	int item_number,m,d,y;
	float unit_price;
	
	printf("Enter item number:");
	scanf("%d",&item_number);
	printf("Enter unit price:");
	scanf("%f",&unit_price);
	printf("Enter purchase date£¨mm/dd/yy) ");
	scanf("%d/%d/%d",&m,&d,&y);
	
	printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%-d\t$%6.2f\t%-d/%d/%d",item_number,unit_price,m,d,y);
	
	return 0;
}
