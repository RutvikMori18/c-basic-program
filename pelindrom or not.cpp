#include<iostream>
using namespace std;

int main()
{
	int number,reverse=0,digit;
	cout<<"enter number";
	cin>>number;
	int n=number;
	while(number!=0){
		digit=number%10;
		reverse= reverse*10 + digit;
		number=number/10;
		
		
	}
	
	cout<<"reverse number : "<<reverse<<endl;
	if(n==reverse){
		cout<<"number is pelindrom "<<reverse;
	}
	else{
		cout<<"number is not pelindrom "<<reverse;
	}
}
