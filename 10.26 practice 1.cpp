#include <stdio.h>
#include <math.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	
	int m[n];
	float squ[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&m[i]);
	}
	
	for(i=0;i<n;i++){
		if(m[i]>=0){
			squ[i]=sqrt(m[i]);
			printf("%.2f\n",squ[i]);	
		}
		else{
			printf("ERROR");
		}
	}
	getchar;
	return 0;
 } 
