#include<iostream>
using namespace std;
void increment(int* a){
	*a=*a+1;
	cout<<"inside the main function "<<*a<<endl;
}

int main(){
	int a=1000;
	increment(&a);
	cout<<"inside the main function "<<a<<endl;
	return 0;
}
