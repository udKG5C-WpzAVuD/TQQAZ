#include <stdio.h>
int main()
{
	int x,y,z;
	scanf("%d,%d,%d",&x,&y,&z);
	
	if(x>y){
		if(x>z)
		printf("max=%d",x);
		else
		printf("max=%d",z);
	}
	else{
		if(y<z)
		printf("max=%d",z);
		else
		printf("max=%d",y);
	}
	
	return 0;
}
