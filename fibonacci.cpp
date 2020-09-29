#include<iostream>

using namespace std;

int main()
{
	int result=0,a=0,b=1;
	int number;
	cout<<"enter the number of fibonacci series:";
	cin>>number;
	cout<<a<<" , "<<b;
	for(int i=2;i<number;i++)
	{
		result=a+b;
		a=b;
		b=result;
		cout<<" , "<<result;
	}
return 0;	
}
