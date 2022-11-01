#include <stdio.h>
int main()
{
	int m,n,i,GCD;
	
	printf("Enter two integers:");
	scanf("%d %d",&m,&n);
	
	for(;;){	
	if(n==0){
		GCD=m;
		printf("Greatest common divisor:%d",GCD);
		return 0;
	}
	else{
		i=m%n;
		m=n;
		n=i;
	}
  }
}
