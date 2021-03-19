#include <iostream>
using namespace std;


int main()
{
	int num1,num2,swap;
	cout << "enter the number first:";
	cin >> num1;
	cout <<"enter the number second :";
	cin >> num2;
	swap =num1;
	num1=num2;
	num2=swap;
	
	cout<<"the first number is"<<num1<<"second number is :"<<num2;
	return 0;
	
}
