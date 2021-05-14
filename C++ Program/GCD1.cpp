#include<iostream>
using namespace std;
int GCD(int num1,int num2){
	if(num2==0){
		return num1;
	}
	return GCD(num2,num1%num2);
}

int main (){
	cout<<GCD(5,7)<<endl;
	cout<<GCD(3,6)<<endl;//3
	cout<<GCD(6,11)<<endl;
	cout<<GCD(11,18)<<endl;
	cout<<GCD(18,27)<<endl;	
}
