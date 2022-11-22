#include <stdio.h>
int main(){
	int n[10];
	for(int x=0;x<10;x++)
	scanf("%d",&n[x]);
	
	int i=0;
	if(n[0]==0){
		for(i=1;i<10;i++){
			if(n[i]!=0){
				for(int k=n[i];k>0;k--)
				printf("%d",i);
			}
		}
	}
	else{
		int j=1;
		while(n[j]==0)j++;
		printf("%d",j);
		for(int z=n[0];z>0;z--)
			printf("0");
		for(int l=n[j]-1;l>0;l--)
		printf("%d",j);
		for(i=j+1;i<10;i++){
			if(n[i]!=0){
				for(int k=n[i];k>0;k--)
				printf("%d",i);
			}
		}
	}
	return 0;
}
