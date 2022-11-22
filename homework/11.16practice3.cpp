#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	long a=1000000;
	
	long num,sum,ans;
	for(int i=0;i<n;i++){
		sum=0;
		scanf("%d",&num);
		for(int j=0;j<num;j++){
			long sum1=1;
			if(j>25)sum1=0;
			else{
				for(int k=j+1;k>0;k--){
				sum1*=k;
				sum1=sum1%a;
			}
			}
			sum+=sum1;
			sum=sum%a;
		}
		ans=sum%a;
		printf("%d\n",ans);
	}
	return 0;
}
