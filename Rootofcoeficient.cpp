#include<iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c;
float discreminate;
float root1,root2;
cout <<"enter the coefficients of a,b,c";
cin >> a >> b >> c;
discreminate=(b*b)-(4*a*c);

if (discreminate>0){
	root1=((-b+sqrt(discreminate))/(2*a));
	root2=((-b-sqrt(discreminate))/(2*a));	
	cout<<"the root is real.,";
}
if (discreminate=0)
{
	root2=root1=-b/2*a;
	cout <<"the root are same.,";
	
 } 
 if(discreminate<0){
 	root1=(-b)/2*a+sqrt(-discreminate)/2*a;
	root2=(-b)/2*a-sqrt(-discreminate)/2*a;
	cout<<"the root are imaginary.,";
 }
cout<<"first root is"<< root1;
cout<<"second root is"<<root2;
return 0; 
}

