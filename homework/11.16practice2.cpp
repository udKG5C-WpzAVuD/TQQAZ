#include <stdio.h>
#include <math.h>
int main(){
	int n[10];
	for(int x=0;x<10;x++)
	scanf("%d",&n[x]);
	
	long num=0;
	if(n[0]==0){
		for(int i=1;i<10;i++){
			if(n[i]!=0){
				num=num*pow(10,n[i]);
				for(int j=n[i]-1;j>=0;j--){
					num=num+i*pow(10,j);
				}
			}
		}
	}
    else{
    	int k;
    	for(k=1;;k++){
    		if(n[k]!=0)
			break;
		}
		num=k*pow(10,n[k]);
		num=num*pow(10,n[k]-1);
		int l;
		for(l=n[k]-2;l>=0;l--)
		    num=num+k*pow(10,l);
    	for(int i=k+1;i<10;i++){
			if(n[i]!=0){
				num=num*pow(10,n[i]);
				for(int j=n[i]-1;j>=0;j--){
					num=num+i*pow(10,j);
				}
			}
		}	
	}
	printf("%d",num);
	return 0;
} 
