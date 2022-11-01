#include <stdio.h>
int main()
{
	int height=8,length=12,width=10;
	
	int volume;
	
	volume=height*length*width;
	
	printf("%d,%d,%d\n",height,length,width);
	printf("volume=%d\n",volume);
	printf("weight=%d\n",(volume+155)/166);
	
	return 0;
}
