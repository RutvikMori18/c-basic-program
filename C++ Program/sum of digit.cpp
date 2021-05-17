#include<iostream>
using namespace std;
//sumof digit of number

int fun(int n){
	if(n<10){
		return n;
	}
		return (fun(n/10) + n%10);
}

int main(){
	int number;
	cin>>number;
	int no=fun(number);
	cout<<no;
	return 0;
}
