/* Sorting numbers */
#include<stdio.h>
#include<string.h>

#define MaxLines 5000    /* max #lines to be sorted */
char *lineptr[MaxLines]; /* pointers o text lines */

int readlines (char *lineptr[], int nlines); 
void writelines ( char *lineptr[], int nlines); 

void qsort(void *lineptr[],int left, int right,
 int (*comp) (void *, void *));

int numcmp(char *, char *); 

/*Main sort Lines */

main ( int argc, char *argv[])
{
int nlines; 
int numeric=0; 

if (argc >1 && strcmp(argv[1],"-n")==0)
    numeric=1; 
if (( nlines=readlines(lineptr, MaxLines))>=0){
    qsort( ( void **) lineptr, 0, nlines-1,
    (int (*) (void*, void*))(numeric ? numcmp: strcmp)); 
    writelines(lineptr, nlines); 
    return 0; 
}else {
printf("Input too big to sort\n"); 
return 1; 
}
} 

void qsort( void *v[],int left, int right, int (*comp)(void *, void *))
{
	int i, last; 
	void swap( void *v[], int, int); 
	
	if (left>=right)
	   returns; 
	swap(v.left,(left+right)/2); 
	
}



