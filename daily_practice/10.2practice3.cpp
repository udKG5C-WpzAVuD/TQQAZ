#include <stdio.h>
int main()
{
	int amount;
	
	printf("Enter a dollar amount:");
	scanf("%d",&amount);
	
	int a,b,c,d;
	a=amount/20;
	b=(amount-20*a)/10;
	c=(amount-20*a-10*b)/5;
	d=(amount-20*a-10*b-5*c)/1;
	
	printf("$20 bills:%d\n",a);
	printf("$10 bills:%d\n",b);
	printf("$5 bills:%d\n",c);
	printf("$1 bills:%d\n",d); 
	
	return 0;
}
