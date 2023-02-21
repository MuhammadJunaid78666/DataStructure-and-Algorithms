#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	cout<<"Enter program No you want to Access!";
	int n;
	cin>>n;
	switch (n){
	case 1:
		{
			cout<<"program to find minimum number from an array"<<endl;
	int arry[5];
	
	for(int i=0;i<5;i++)
	{
		cout<<"enter an array element "<<i+1<<" : ";
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

}
		break;
		case 2:
		{
			cout<<"program to find maximum number from an array "<<endl;
	int arry[5];
	
	for(int i=0;i<5;i++)
	{
		cout<<"enter an array element "<<i+1<<" : ";
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
	}
	break;
	case 3:
		{
			cout<<"program to find searching number present or not"<<endl;
	int arry[5];
	
	for(int i=0;i<5;i++)
	{
		cout<<"enter an array element "<<i+1<<" : ";
		cin>>arry[i];	
	}
	int a;
	bool flag;
	cout<<"enter a number";
	cin>>a;
	for(int i=0;i<5;i++)
	{
		if(a==arry[i])
		flag++;
}
	if(flag==1){
		cout<<"Num is Present"<<endl;
	}
	else 
	cout<<"Not Present"<<endl;
}
break;
case 4:
	
{
	cout<<"program to find how many time number come in an array"<<endl;
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
}
break;
case 5:
	{cout<<"program to find only odd number  in an array"<<endl;
	
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
break;
case 6:
	
{
	cout<<"program to find only even number in an array"<<endl;
	int arry[5];
	
	for(int i=0;i<5;i++)
	{cout<<"enter an array element "<<i+1<<endl;
		cin>>arry[i];	
	}
	cout<<"\n even number are"<<endl;
	for(int i=0;i<5;i++)
	{
		if(arry[i]%2==0)
		{
			cout<<arry[i]<<endl;
		}
	}
	break;
	case 7:
		{
			cout<<"program to find sum of an array elements"<<endl;
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
		
	}
	break;
	case 8:
		{
			cout<<"program to  reverse an array"<<endl;
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
}
break;
case 9:
	{
		cout<<"program to find unique number of an array"<<endl;

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
	
break;
}	
default:
	{
		cout<<"invalid choice"<<endl;
	}
	}

getch();
}}

