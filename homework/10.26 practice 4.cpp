#include <stdio.h>
int main()
{
	int T,m,n;
	scanf("%d",&T);
	
	int a,b,c,num;
	for(int i=0;i<T;i++){
		scanf("%d %d",&m,&n);
		if(100<=m&&m<=n&&n<=999){
			num=0;
		for(int j=m;j<=n;j++){
		a=j%10;b=(j-a)/10%10;c=j/100;
		if(j==a*a*a+b*b*b+c*c*c){
			printf("%d ",j);
			num=1;
		}	
		}
		if(num==0){
			printf("-1\n");
		}
		else{
			printf("\n");
		}
		num=0;
	}
	}
	getchar;
	return 0;
}
