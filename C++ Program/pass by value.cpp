#include<iostream>
using namespace std;

void increment(int a){
	a=a+1;
	cout<<"inside the increment function "<<a<<endl;
}
int main(){
	int a=100;
	increment(a);
	cout<<"inside the main function "<<a;//this is happns because of the pss by value
	return 0;
}
