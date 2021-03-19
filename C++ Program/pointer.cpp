#include<iostream>

using namespace std;

int main(){
			 //enter the code
			int a= 7;
			int* b= &a;
			cout<<b<<endl;
			cout <<*b<<endl; 
			int** c=&b;
			cout<<"the value at c is "<<c<<endl;
			cout<<"the address of b is "<<*c<<endl;
			cout<<"the value of a is "<<**c<<endl;
			 return 0;
	 }

