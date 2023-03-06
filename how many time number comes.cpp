#include<iostream>
using namespace std;
int main()
{
	int arry[5];
	
	for(int i=0;i<5;i++)
	{cout<<"enter an array element "<<i+1<<endl;
		cin>>arry[i];	
	}
		int a;
		int count=0;
	cout<<"Enter a number";
	cin>>a;
	for(int i=0;i<5;i++)
	{
		if (a==arry[i])
		{
		count++;	}
}
cout<<a<<" Appears "<<count<<" Times In Array"<<endl;
return 0;
}
