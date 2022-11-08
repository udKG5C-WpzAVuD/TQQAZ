#include <stdio.h>
int main()
{
	int x;
	
	printf("Enter a number between 0 and 32767:");
	scanf("%d",&x);
	
	printf("In octal,your number is:%o",x);
	
	return 0;
}
