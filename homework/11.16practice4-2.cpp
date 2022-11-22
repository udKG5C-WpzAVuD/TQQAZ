#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int i=0,j=0,k=0,x=0;
	int num[100]={0};
	char ch[100];
	
	for(i=0;i<n;i++){
		x=scanf("%d",&num[i]);
		if(x==0){
			scanf("%s",&ch[i]);
			j++;
		}
	}
	int sum;
	for(k=0;k<n;k++){
		sum+=num[k];
	}
	float ave=0;
	if(j==n)printf("n/a\n");
	else{
		ave=sum*1.0/(n-j);
		printf("%.2f",ave);
	}
	return 0;	
} 
