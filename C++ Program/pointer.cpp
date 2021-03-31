#include<iostream>
using namespace std;
int main(){
	int x=10;
	cout<<x<<endl;
	cout<<"x address in symbol table is "<<&x<<endl;
	
	int* ptr=0;//must be intialize with zero because of garbage value
	cout<<ptr<<endl;
	
	char b = 'A';
	char* ptrb=&b;
	cout<<ptrb<<endl;//char by default charater print
	cout<<&b<<endl;
	//we can reassign the address of pointer
}
