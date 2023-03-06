#include<iostream>
using namespace std;
int main()
{
	int arry[5];
	
	for(int i=0;i<5;i++)
	{
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
return 0;
}
