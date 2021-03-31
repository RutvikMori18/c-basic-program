#include<iostream>
using namespace std;

int main(){
	int x=20;
	int* ptrx=&x;
	
	cout<<*(&x)<<endl;
	cout<< *ptrx<<endl;
	
	cout<<*(ptrx)+1<<endl;
	cout<<*(ptrx+1);//print the garbage value
	
}
