#include<iostream>

using namespace std;
int main()
{

int n,arry[n],i,j;
cout<<"enter size of array =";
cin>>n;
for(int i=0;i<n;i++)
{cout<<"enter an array element "<<i+1<<" : ";
	cin>>arry[i];
}
int temp=0;
for(int i=0;i<n;i++)
{
	for(int j=i+1;j<n;j++)
	{
	
	if (arry[i]>arry[j])
	{
	
	temp=arry[i];
	arry[i]=arry[j];
	arry[j]=temp;
}
}
}
cout<<"sorted array is ";
for(int i=0;i<n;i++)
{

cout<<arry[i]<<"\t";
}
return 0;
}
