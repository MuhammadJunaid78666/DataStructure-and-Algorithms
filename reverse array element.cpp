#include<iostream>
using namespace std;
int main()
{
	int arry[5];
	
	for(int i=1;i<=5;i++)
	{
		cout<<"enter an array element "<<i<<endl;
		cin>>arry[i];	
		
	}
	cout<<"\nReverse Of Array is "<<endl;
	for (int i=5;i>0;i--)
	{
		cout<<arry[i]<<endl;
	}
	return 0;
}
