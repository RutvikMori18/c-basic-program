#include<iostream>

using namespace std;

int main()
{
	int natural=0,i,number;
	cout<<"enter the number which you sum";
	cin>>number;
	for (i =0;i<=number;i++)
	{
		natural=i+natural;
	}
	cout<<"the sum of your number is"<<natural;
return 0;
}
