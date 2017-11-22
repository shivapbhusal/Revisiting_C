#include<stdio.h>
main()
{
	int comp1=strcmp("Hello World","Hello World"); 
	int comp2=strcmp("My name is red","Hello World"); 
	int comp3=strcmp("Hello World","Hello World"); 
	int comp4=strcmp("My name is red","Hello World"); 
	printf("%d\n",comp1); 
	printf("%d\n",comp2); 
	printf("%d\n",comp3); 
	printf("%d\n",comp4); 

}
int strcmp(char *s, char *t)
{
	int i; 

	for (i=0;s[i]==t[i];i++)
		if (s[i]=='\0')
			return 0; 
	return s[i]-t[i];
}
int strcmp2 ( char *s, char *t)
{
	for (;*s==*t;s++,t++)
	{
		if (*s=='\0')
		  return 0;
	}
	return *s-*t; 
}

