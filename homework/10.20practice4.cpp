#include <stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	
	int a[n],b[n],c[n],num[n];
	float ave[n]; 
	 
	for(i=0;i<n;i++){
		scanf("%d %d %d %d",&num[i],&a[i],&b[i],&c[i]);
		ave[i]=(a[i]+b[i]+c[i])/3.0;
	}

    for(i=0;i<n;i++){
    	printf("%.2f\n",ave[i]);
	}
		
	return 0;
}

