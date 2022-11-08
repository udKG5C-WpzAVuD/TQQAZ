#include <stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	
	int a[n],b[n],c[n];
	
	for(i=0;i<n;i++){
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
		}
	for(i=0;i<n;i++){
		if(a[i]<=0||b[i]<=0||c[i]<=0){
			printf("No");
		}
		else if(a[i]*a[i]==b[i]*b[i]+c[i]*c[i]||b[i]*b[i]==a[i]*a[i]+c[i]*c[i]||c[i]*c[i]==a[i]*a[i]+b[i]*b[i]){
			printf("Yes\n");
			}
		else{
			printf("No\n");
		}
		}
	getchar;
	return 0;
}
