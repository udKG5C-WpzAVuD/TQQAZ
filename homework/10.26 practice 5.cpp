#include <stdio.h>
#include <math.h>
int main()
{
	int n,k=0,num,squ;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		if(num==1){
			printf("no\n");
		}
		else if(num>=2){
			squ=sqrt(num);
		    for(int j=2;j<=squ;j++){
			if(num%j==0){
				printf("no\n");
				break;
			}
			else{
				k++;
			}
		}
		if(k==squ-1){
			printf("yes\n");
		}
		k=0;
	}	
		}
		
	getchar;
	return 0;
}
