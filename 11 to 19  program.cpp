#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
		cout<<"Enter program No you want to Access!";
		int a;
		cin>>a;
		switch (a)
	{
		case 1:
			{
				cout<<"program to seperate even and odd integers"<<endl;
	int arry[5];
	
	for(int i=0;i<5;i++)
	{cout<<"enter an array element "<<i+1<<endl;
		cin>>arry[i];	
	}
	for(int i=0;i<5;i++)
	{
		if(arry[i]%2==0)
		{
			cout<<"even number are "<<arry[i]<<endl;
		}
		else
		{
			cout<<"odd number are "<<arry[i]<<endl;
		}
	}
	break;
	case 2:
		{
			cout<<"program to count even and odd integers in an array"<<endl;
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
	break;}

	case 3:
		{
			cout<<"program to sort an array in ascending order"<<endl;

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
break;}
case 4:
	
{
	cout<<"program to sort an array in to decending order"<<endl;

int n,arry[n],i,j;
cout<<"enter size of an array =";
cin>>n;
for(int i=0;i<n;i++)
{
	cout<<"enter an array element "<<i+1<<" : ";
	cin>>arry[i];
}
int temp=0;
for(int i=0;i<n;i++)
{
	for(int j=i+1;j<n;j++)
	{
	
	if (arry[i]<arry[j])
	{
	
	temp=arry[i];
	arry[i]=arry[j];
	arry[j]=temp;
}
}
}
for(int i=0;i<n;i++)
{

cout<<arry[i]<<endl;
}
break;}
case 5:
	{
		cout<<"program to find 2nd smallest number in an array"<<endl;
	int arry[5];
	int i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter Number "<<i+1<<":";
		cin>>arry[i];
	}
	cout<<"Numbers are"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arry[i]<<"\t";
	}
	sort(arry,arry+i);
	cout<<"the second smallest number is"<<arry[1];
	break;
}
case 6:
{cout<<"program to find two array same or not"<<endl;
	int arry[5];
	cout<<"enter five element of first array"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arry[i];	
	}
		int arr[5];
	cout<<"enter five element of second array"<<endl;
	for(int j=0;j<5;j++)
	{ 
		cin>>arr[j];	
	}
	bool flag;
	for (int i=0;i<5;i++)
	{
		for(int j=i+1; j<=5; j++){
		
		if(arry[i]==arr[j])
		flag++;
}
}

	if(flag==1){
		cout<<"Both Arrays are Same"<<endl;
	}
	
	else
	cout<<"Arrays Are Different"<<endl;
	
	break;
}
default:
	{
		cout<<"invalid input"<<endl;
	}
	
	}
		
		
	}
	
	return 0;
}
