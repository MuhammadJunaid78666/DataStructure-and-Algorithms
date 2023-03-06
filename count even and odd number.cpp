#include<iostream>
using namespace std;
int main()
{
	int arry[5];
	
	for(int i=0;i<5;i++)
	{cout<<"enter an array element"<<i+1<<endl;
		cin>>arry[i];	
	}
	int even=0, odd=0;
	for(int i=0;i<5;i++)
	{
		if(arry[i]%2==0)
		{
		
		even++;
	}
		else
		{
		odd++;
	}
	}
	cout<<"even number are "<<even<<endl;
	cout<<"odd number are "<<odd;
			
	
	return 0;
}
