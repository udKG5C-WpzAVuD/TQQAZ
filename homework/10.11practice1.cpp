#include <stdio.h>

int main()
{
    int num,a,b;
    scanf("%d",&num);
    
    int i;

    for(i=0;i<num;i++){
        scanf("%d %d",&a,&b);
        printf("%d\n",a*b);
    }
    return 0;
}
