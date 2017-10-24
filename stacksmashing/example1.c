// An example program to show buffer overflow 

#include<stdio.h>

void myfunction( int a, int b, int c){
char buffer1[5];
char buffer2[10];
}
int main()
{
	myfunction(1,2,3);

}
