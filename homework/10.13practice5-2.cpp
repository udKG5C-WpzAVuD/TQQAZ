#include <stdio.h>
int main()
{
    float a;//aΪ������� 
    float b;//b���ڴ���a��С������ 
    int c;//c���ڴ���a����������  
    scanf ("%f",&a);
    c=a;
    if (a>=0)
      {
	  b=a-c;
      if (b>=0.5)
      printf ("%d",c+1);
      else 
      printf ("%d",c);
	  }
    else
    {
	b=c-a;
    if (b>=0.5)
    printf ("%d",c-1);
    else
    printf ("%d",c);
    }
	return 0;
}

