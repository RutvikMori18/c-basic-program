#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int l,r;
	    cin>>l,r;
	      while(l<=r){
	        	int temp=0;
	            temp = l % 10;
	            if(temp==2 || temp==3 || temp==9){
	                cout<<l<<endl;
	            }
	          l++;
	       }
		t--;
	}
   return 0;
}


