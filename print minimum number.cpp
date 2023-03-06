#include<iostream>
using namespace std;
int main()
{
	int arry[5];
	
	for(int i=0;i<5;i++)
	{
		cin>>arry[i];	
	}
		int min=arry[0];
	for(int i=0;i<5;i++)
	{
		if(arry[i]<min)
		{
		
		
		min=arry[i]; 
	}
}
		cout<<"minimum number is"<<min;

	

	return 0;
}
