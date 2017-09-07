#include<stdio.h>
main()
{
	int stringLength=strlen("hello World");
	int stringLength2=strlen("My name is red"); 
	int stringLength3=strlen("There are many artists in the world");
	printf("%d\n",stringLength);
	printf("%d\n",stringLength2); 
	printf("%d\n",stringLength3); 	
}
int strlen(char *s)
{
	int n; 
	for (n=0;*s!='\0';s++)
		n++; 
	return n;
}
