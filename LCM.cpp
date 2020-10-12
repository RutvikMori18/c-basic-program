#include<iostream>
using namespace std;

int main()
{
	int n1,n2,max,mul1,mul2;
	cout<<"enter the number:";
	cin>>n1>>n2;
	max=(n1>n2)? n1:n2;
	for(int i=1;i<100;i++)
	{
		mul1=n1*i;
		mul2=n2*i;
		if(mul1==mul2)
		{
			cout<<mul1;
			break;
		}
	}
	return 0;
}
