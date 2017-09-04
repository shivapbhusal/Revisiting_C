#include<stdio.h>
main()
{
	int a=2; 
	int b=5; 
	swap(a,b);
	printf("%d",a); 
	printf("%d",b); 
}
void swap(int x, int y)
{
	int temp; 
	temp=x; 
	x=y; 
	y=temp; 
}
