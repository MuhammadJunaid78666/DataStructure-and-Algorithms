
#include<iostream>
using namespace std;
int main()
{
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
	
	return 0;
}
