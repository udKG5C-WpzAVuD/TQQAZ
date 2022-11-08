#include <stdio.h>

int main()
{
	int num;
	float com; 
	
	printf ("Enter value of trade:");
	scanf("%d",&num);
	
	if(num<2500)
	 com=30+num*0.017;
	else if(num<6250)
	 com=56+num*0.0066;
	else if(num<20000)
	 com=76+num*0.0034;
	else if(num<50000)
	 com=100+num*0.0022;
	else if(num<500000)
	 com=155+num*0.0011;
	else 
	 com=255+num*0.0009;
	 
	if(com<39)
	 com=39.00;
	 	
	printf("Commission:$%.2f",com);
	
	return 0;
 } 
