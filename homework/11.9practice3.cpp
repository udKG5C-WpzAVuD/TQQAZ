#include <stdio.h>
#include <math.h>

int main(){
	int a,n;
	
	scanf("%d %d",&a,&n);
	
	int s,b;
	b=a;
	
	for(int i=0;i<n;i++){
	if(i==0){
		s=a;
	}
	else{
		a+=b*pow(10,i);
		s+=a;
	}
	}
	printf("%d\n",s);
	return 0;
}
