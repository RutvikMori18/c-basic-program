#include <iostream>
using namespace std;

int main()
{
	int first,second,third;
	cout<<"enter the three number:";
	cin >> first>>second>>third;
	
	if(first>second &&first>third)
	{
		cout<<first<<"is the largest number";
	}
	else if(second>first &&second>third)
	{
		cout<<second<<"is the largest number";
	}
	else
	{
		cout<<third<<"is the largest number";
	}
}
