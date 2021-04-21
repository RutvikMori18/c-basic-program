#include <iostream>
using namespace std;

int main(){
	// your code goes here
	int T;
	cin>>T;
	if(T>=1&& T<=100)
	{
	    while(T--)
	    {
	        int a,b,c,t,A,B,C;
	        cin>>a>>b>>c>>t>>A>>B>>C;
	        int sum=a+b+c;
	        int sum1=A+B+C;
	        if(a<=A && b<=B && c<=C )
	        {
	                    if(sum<=t && t<=300 && sum1>=t)
	                    {
	                         cout<<"YES"<<endl;
	                    }
	                    else
	                    {
	                        cout<<"NO"<<endl;
	                    } 
	        }
	        else
	        {
	            cout<<"NO"<<endl;
	        }
	    }
	}    
	return 0;
}

