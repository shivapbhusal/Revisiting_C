#include<stdio.h>
main()
{
	int a=2; 
	int b=5; 
	swap(&a,&b);
	printf("%d",a); 
	printf("%d",b); 
}
void swap(int *px, int *py)
{
	int temp;
	temp=*px;
	*px=*py;
	*py=temp;
}
