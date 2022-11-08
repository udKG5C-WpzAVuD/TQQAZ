#include <stdio.h>
int main()
{
	int max,i,j,k;
	printf("Enter three number:");
	scanf("%d %d %d",&i,&j,&k);
	
	if(i>j){
	  if(j>k)
	    max=i;
	  else
	    max=k;	
	}
	
	else{
	if(j>k)
	    max=j;
	  else
	    max=k;
	}
	
	printf("max=%d",max);
	  
	return 0;
} 
