#include <stdio.h>
int main()
{
	float amount;
	float tax_added_amount;
	
	printf("Enter an amount:");
	scanf("%f",&amount);
	
	tax_added_amount=1.05f*amount;
	
	printf("$%.2f\n",tax_added_amount);
	
	return 0;
}
