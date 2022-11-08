w#include <stdio.h>
int main()
{
	int GS1,Group,Publisher,Item,Check;
	
	printf("Enter ISBN:");
	scanf("%d-%d-%d-%d-%d",&GS1,&Group,&Publisher,&Item,&Check);
	
	printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n"
	,GS1,Group,Publisher,Item,Check);
	
	return 0;
}
