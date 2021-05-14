#include <iostream>
using namespace std;

int main() {

	// your code goes here
		int T;
		cin>>T;
	while(T>0){
		int x,a,b,A,B,X;
		cin>>x>>a>>b;
		
		if(31<=x&&x<=40){
			X=x;
		}
		if(101<=a&&a<=120){
			 A=a;
		}
		if(1<=b&&b<=5){
			 B=b;
		}
		
		
		int result=(A+(100-X)*B)*10;
		cout<<result<<endl;
	
	    T--;
	}
	return 0;
}

