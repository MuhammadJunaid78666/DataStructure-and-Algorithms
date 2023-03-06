#include<iostream>
using namespace std;
#include<conio.h>
int main()
{

int n,arry[n],i,j;
cout<<"enter size of an array =";
cin>>n;
for(int i=0;i<n;i++)
{
	cout<<"enter an array element "<<i+1<<" : ";
	cin>>arry[i];
}
//unique elements are
cout<<"unique number are ";
for(int i=0;i<n;i++)
{
	int j;
	for(j=0;j<n;j++)
	{
	if(i==j)
	{
	continue;
}
if(arry[i]==arry[j])
{
	break;
}

}
if(j==n)


{
cout<<arry[i]<<"\t";
}

}



}


