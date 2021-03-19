#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	int b,result=1;
	while(a--)
	{
	    cin>>b;
	    while(b!=0)
	    {
	       result*=b;
		   b--; 
	    }
	    cout<<result<<endl;
	}
	return 0;
}
