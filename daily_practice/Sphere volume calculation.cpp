#include <stdio.h>
int main()
{
	float r;
	float v;
	float pi=3.1415926;
	
	printf("Enter r:");
	scanf("%f",&r);
	
	v=4.0f*pi*r*r*r/3.0f;
	
	printf("v=%f",v);
	
	return 0; 
 } 
