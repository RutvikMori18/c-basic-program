#include<iostream>

using namespace std;

int main()
{
	int n,number=1,pow; 
	cout<<"enter the number:";
	cin>>n;
	cout<<"enter the power:";
	cin>>pow;
	for (int i=1;i<=pow;i++)
	{
		number*=n;
	}
	cout<<"your number power is:"<<number;
}
