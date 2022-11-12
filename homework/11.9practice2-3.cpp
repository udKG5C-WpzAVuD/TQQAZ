#include <stdio.h>
#include <string.h>

int main(){
	char a[256];//for all string
	char b[256];//for all letters
	gets(a);//get string
	int strlength = strlen(a);//get length of string
    //need header "#include <string.h>"
	int flag[100] = {0};//record position of nonletter
	
	int i=0,j=0,k=0;
	int count = 0;//used to record the position of noletter in string
	
	for(i=0,j=0;i<strlength;i++){//traverse the string
	
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')//letter  
		{
			b[j]=a[i];//put letter in a new array
			j++;
		}
		
		else{ //no t letter
		   flag[count] = i;//record positions of noletter
		   count++;
      	}
    } //for
	
	for(k=0,count=0;k<strlength;k++){//traverse the string again
		if(k==flag[count]){//while meet noletter,print
			printf("%c",a[k]);
			count++;
		}
		else{//while meet letter,reverse and print
		    printf("%c",b[j-1]);
		    j--;
	    }
	}//for
	
}

