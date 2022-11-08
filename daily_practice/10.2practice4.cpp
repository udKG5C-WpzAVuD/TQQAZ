#include <stdio.h>
int main()
{
	float loan,interest_rate,monthly_payment;
	
	printf("Enter amount of loan:");
	scanf("%f",&loan);
	printf("Enter interest rate:");
	scanf("%f",&interest_rate);
	printf("Enter monthly payment:");
	scanf("%f",&monthly_payment);
	
	float i;
	i=interest_rate/100/12;
	
	float a,b,c;
	a=(loan-monthly_payment)*(1+i);
	b=(a-monthly_payment)*(1+i);
	c=(b-monthly_payment)*(1+i);
	
	printf("Balance remaining after first month:%.2f\n",a);
	printf("Balance remaining after second month:%.2f\n",b);
	printf("Balance remaining after third month:%.2f\n",c);
	
	return 0;
}
