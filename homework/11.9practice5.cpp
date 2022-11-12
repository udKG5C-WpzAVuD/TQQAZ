#include <stdio.h>

int main(){
	int n;
	
	scanf("%d",&n);
	
	for(int m=0;m<n;m++){
	int number;
	scanf("%d",&number);
	
	int num[121];
	
	for(int i=0;i<number;i++){
		if(i==0){
			num[0]=1;
			printf("%d\n",num[0]);
		}
		else{
		int k,l;
		k=(1+i)*i/2;
		for(int j=0;j<i+1;j++){
			if(j==0||j==i){
				num[k+j]=1;
				if(j==0){
					printf("%d ",num[k+j]);
				}
				else{
					printf("%d\n",num[k+j]);
				}
			}
			else{
				num[k+j]=num[l+j]+num[l+j-1];
				printf("%d ",num[k+j]);
			}
		}
		l=k;
	}
	}
}
	return 0;
}
