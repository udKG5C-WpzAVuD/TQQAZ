#include <stdio.h>
int main()
{
	int x,a,b,c;
	
	printf("Enter a three-digit number:");
	scanf("%d",&x);
	
	a=x%10;
	b=(x/10)%10;
	c=x/100;
	
	printf("The reversal is:%d%d%d",a,b,c); 
	
	return 0;
}
