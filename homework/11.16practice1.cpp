#include <stdio.h>
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	
	int a[m],b[n],c[m+n];
	int i,j,k;
	
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	for(j=0;j<n;j++){
		scanf("%d",&b[j]);
		c[m+j]=b[j];
	}
	for(k=0;k<m+n-1;k++){
		for(int l=0;l<m+n-1-k;l++){
			if(c[l]>c[l+1]){
				int temp;
				temp=c[l];
				c[l]=c[l+1];
				c[l+1]=temp;
			}
		}
	}
	for(k=0;k<m+n;k++){
		printf("%d ",c[k]);
	}
	return 0;
}
