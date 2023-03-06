#include<iostream>
using namespace std;
int main()
{
	int arry[5];
	
	for(int i=0;i<5;i++)
	{cout<<"enter an array element "<<i+1<<endl;
		cin>>arry[i];	
	}
	for(int i=0;i<5;i++)
	{
		if(arry[i]%2!=0)
		{
			cout<<"odd number are "<<arry[i]<<endl;
		}
	}
	return 0;
}
