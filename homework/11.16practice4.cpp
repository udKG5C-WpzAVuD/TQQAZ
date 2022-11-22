#include <stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	
	int i=0,k=0;
	int sum=0,num[100]={0},ave=0;
	char ch[100]; 
	for(i=0;i<n;i++){
		if(!scanf("%d",&num[i])){
			scanf("%s",ch);
			k++;
			continue;
		}
	}
	for(i=0;i<n;i++){
			sum+=num[i];
		    }
	if(k==n)printf("n/a\n");
	else{
		ave=sum/(n-k);
	    printf("%.2f\n",ave);
	}
	return 0;
} 
