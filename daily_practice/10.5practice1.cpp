#include <stdio.h>
int main(void)
{
	int a,b,c,d,e,f,g,h,i,j,k,l,x,y;
	printf("Enter the first(single) digit:");
	scanf("%1d",&a); 
	
	printf("Enter first group of five digits:");
	scanf("%1d%1d%1d%1d%1d",&b,&c,&d,&e,&f);
	
	printf("Enter second group of five digits:");
	scanf("%1d%1d%1d%1d%1d",&g,&h,&i,&j,&k);
	
	x=a+c+e+g+i+k;
	y=b+d+f+h+j;
	l=9 - ((3 * x + y - 1) % 10);
	
	printf("Check digit:%d\n",l);
	
	return 0;
}
