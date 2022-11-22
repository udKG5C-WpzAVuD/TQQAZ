#include <stdio.h>
#include <string.h>

int main(){
	char a[256];
	fgets(a,255,stdin);
	
	int i=0,j=0,k=0;
	
	for(;;){
		while(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z'){
		i++;
	}
	for(j=i-1;j>=k;j--){
			printf("%c",a[j]);
		}
	k=i; 
	while(!(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')){
		if(a[i]=='\n'){
			return 0;
		}
	else{
			printf("%c",a[i]);
			i++;
		}
		k=i;
	} 
  }
} 
