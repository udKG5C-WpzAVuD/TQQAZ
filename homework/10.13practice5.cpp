#include <stdio.h>
int main()
{
	float a;
	int b;
	
	scanf("%f",&a);
	 
	if(a>=0)
	b=a+0.5;
	else
	b=a-0.5;
	
	printf("%d",b);
	
	return 0;
}
