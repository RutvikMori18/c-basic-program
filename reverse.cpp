#include<iostream>

using namespace std;

int main()
{
	int number,reverse=0,reminder;
	cout<<"enter the number which you give reverse:";
	cin>>number;
	while(number!=0)
	{
	reminder=number%10;
	reverse=reverse*10+reminder;
	number/=10;
	}
	cout<<"reverse number is:"<<reverse;

return 0;	
}
