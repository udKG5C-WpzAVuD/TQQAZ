#include <stdio.h>
int main()
{
	int x,a,b;
	
	printf("Enter a two-digit number:");
	scanf("%2d",&x);
	
	a=x%10;
	b=x/10;
	
	printf("The reversal is:%d%d",a,b);
	
	return 0;
	
}
