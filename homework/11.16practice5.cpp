#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int num=0;
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		if(num==1)printf("true\n");
		else{
			while(num>1){ 
				if(num%2==0)num=num/2;
				else if(num%3==0)num=num/3;
				else if(num%5==0)num=num/5;
				else {
					printf("false\n"); 
					break;
				}
			}
			if(num==1)printf("true\n");
		}
	}
	return 0;
}
