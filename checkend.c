#include<stdio.h>
main()
{
	int a=strend("MyHelloWorld","HelloWorldXyz"); 
	printf("%d\n", a); 

}
int strend(char *ps, char *pt)
{
	int length1=strlength(ps);
	int length2=strlength(pt);  
	printf("%d\n",length1);
	printf("%d\n",length2); 
	if (length1<length2)
	{
		return 0; 
	}
	else {
		for ( ; *(ps+length1-length2)==*pt; ps++, pt++)
		{
			if (*(ps+length1-length2)=='\0')
			    return 1; 
		}
		return *(ps+length1-length2)-*pt; 	
	} 
	
}
int strlength( char *pa)
{
char *s=pa; 
while(*pa!='\0')
{
	pa++; 
}
return pa-s; 
}
