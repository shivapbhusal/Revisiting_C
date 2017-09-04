#include<stdio.h>
main()
{
	int stringLength=strlen("hello World");
	printf("%d",stringLength);
}
int strlen(char *s)
{
	int n; 
	for (n=0;*s!='\0';s++)
		n++; 
	return n;
}
