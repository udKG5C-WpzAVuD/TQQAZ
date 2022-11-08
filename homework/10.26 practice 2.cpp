#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,m;
	scanf("%d",&m);
	
	int num[m],a[i],max=0,anw;
	
	for(i=0;i<m;i++){
		scanf("%d",&num[i]);
		a[i]=abs(num[i]);
		if(a[i]>=max){
			max=a[i];
			anw=num[i];
		}
	}
	printf("%d",anw);
	getchar;
	return 0;
}
