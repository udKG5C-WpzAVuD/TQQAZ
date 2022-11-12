#include <stdio.h>
#include <string.h>

int main(){
	char a[256];//for all string
	gets(a);//get string
	int strlength = strlen(a);//get length of string
    //need header "#include <string.h>"
	int flag[100] = {0};//record position of nonletter
	
	int i=0,j=0,k=0;
	int count = 0;//used to record the position of noletter in string
	
	for(i=0,j=0;i<strlength;i++){//traverse the string
	
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')//letter  
		{
           //do nothing
		}
		
		else{ //not letter
		   flag[count] = i;//record positions of noletter
		   count++;
      	}
    } //for
	
	for(k=0,count=0;k<strlength;k++){//traverse the string again
	
	if(k<=flag[count]){//if the end of the string is notletter
	//example:  asd  123 as 123
		if(k==flag[count]){//while meet noletter,print
			printf("%c",a[k]);
			count++;
		}
		else{//while meet letter,reverse and print
		    if(count>0)
		      printf("%c",a[flag[count]-k+flag[count-1]]);
		    else
		      printf("%c",a[flag[count]-k-1]);
	    }
    }
    
    else{//if the end of the string is letter
    //example:  asd  123 as 123 qwe
    	printf("%c",a[strlength-k+flag[count-1]]);
	}
	}//for
	
}

