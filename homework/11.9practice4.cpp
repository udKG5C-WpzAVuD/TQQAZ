#include <stdio.h>

int main(){
	int n,num;
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		int j,k=0,turnnum=0;
		j=num;
		while(j!=0){
			k=j%10;
			if(turnnum==0){
				turnnum+=k;
			}
			else{
				turnnum=k+turnnum*10;
			}
			j=(j-k)/10;
		}
		if(num==turnnum){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}
