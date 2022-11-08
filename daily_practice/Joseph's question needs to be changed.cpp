#include <stdio.h>
int main()
{
	int n,k,m,j,count,out;
	int num[n];
	
	scanf("%d %d %d",&n,&k,&m);
	
	for(int i=0;i<n;i++){
		num[i]=i+1;
	}
	count=0;
	for(out=0;out<=(n-2);){
		if(out==0){
			j=count+k;
			if (num[j]!=0){
				count++;
				j++;
				if(j==n){
					j=j-n;
				}
				else if(count==m){
				num[j]=0;
				count=0;
				out++;
			    }
			}

		}
		else{
			if (num[j]!=0){
				count++;
				j++;
				if(j==n){
					j=j-n;
				}
				else if(count==m){
				num[j]=0;
				count=0;
				out++;
			    }
			}
			
		}
	}
    for(int i=0;i<n;i++){
    if(num[i]!=0){
	  printf("%d",i+1);
	  }
	}

	return 0;
}
