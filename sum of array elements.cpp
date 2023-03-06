#include<iostream>
using namespace std;
int main()
{
	int arry[5];
	
	for(int i=0;i<5;i++)
	{
		cout<<"enter an array element "<<i+1<<endl;
		cin>>arry[i];	
	}
		int sum=0;
		for(int i=0;i<5;i++)
		{
			sum=sum+arry[i];
		}
		cout<<"sum of an array element is "<<sum;
		return 0;
	}
