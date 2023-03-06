#include<iostream>
using namespace std;
int main()
{
	int arry[5];
	
	for(int i=0;i<5;i++)
	{
		cin>>arry[i];	
	}
		int max=arry[0];
	for(int i=0;i<5;i++)
	{
		if(arry[i]>max)
		{
		
		
		max=arry[i]; 
	}
}
		cout<<"maximum number is"<<max;

	

	return 0;
}
