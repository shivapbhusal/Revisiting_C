#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<string>
using namespace std;

void swap(char **name, int *score,int i, int min){
	char **temps = new char *[1];
	*temps[1] = *name[i];
	*name[i] = *name[min];
	*name[min]=*temps[1];
	
	int tempn= score[i];
	score[i]=score[min];
	score[min]=tempn;
} 

void sort(char **name, int *score,int n)
{
	
	int  min;	
	for(int i =0;i<n-1;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(score[min]>score[j])
				min=j;
		}
		swap(name,score,i+1,min);
	}
}

int main()
{
	int n;
	cout<<"Enter the number of students"<<endl;
	cin>>n;
	cout<<"Enter name and score of"<<n <<" students"<<endl;
	char **name = new char * [n+1];   //create an array pointer 
	
	int *score = new int[n];
	int ii=0;
	for(;ii<n;ii++)
	{
		
		name[ii] = new char[10];   //for each char array pointer create the actual array
		char ch = getchar();
		int ab=0;
		while(ch!=32)  //while user doesn't press space
		{
			
			name[ii][ab++] =ch;  //go on reaeding character and saving 
			
			ch = getchar();
		}
		name[ii][ab]='\0'; //terminate the array with delimiter and move to read score
		cout<<name[ii];    //just to see if input is read
		
		cin>>score[ii];
		cout<<score[ii]<<endl; // check if input read
	}
	name[ii]='\0';
	cout<<"hey";
	sort(name,score,n);
	cout<<"The sorted name and score are"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<*name[i]<< "  ";
		cout<<score[i]<<endl;
	}
	return 1;
}
	

