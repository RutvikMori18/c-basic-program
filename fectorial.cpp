#include<iostream>

using namespace std;

int main()
{
	int fecto,result=1;
	cout<<"enter the number which you gave fectorial:";
	cin >> fecto;
	for(int i=1;i<=fecto;i++)
	{
		result=result*i;
		
	}
	cout<<"the result of your fectorial is"<<result;
	
return 0;	
}
