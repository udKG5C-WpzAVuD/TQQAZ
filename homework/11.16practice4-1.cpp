#include<stdio.h>
int main(){
	int n, i, m, count=0;
	scanf("%d",&n);
	int a[100]={};
	char g[100]={};
	for(i=0;i<n;i++){
		if(!scanf("%d",&a[i])){
			scanf("%s",g);
			count++;
			continue;
		}
	}
	
int sum=0;
for(int i=0;i<n;i++)sum+=a[i];
if(count!=n)
printf("%.2f\n",sum*1.0/(n-count));
else printf("n/a\n");
return 0;
}

