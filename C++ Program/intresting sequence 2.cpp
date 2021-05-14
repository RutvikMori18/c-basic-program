#include<iostream>
using namespace std;
int GCD(int n1,int n2)
{

	
	while(n1!=n2)
	{
		if(n1>n2)
		{
			n1-=n2;
		}
		else{
			n2-=n1;
		}
	}
	
return n1;	
}

int main(){
	unsigned int t,k;
	cin>>t;
	while(t--){
		int result=0;
		cin>>k;
		
		for(int i=0;i<=2*k;i++){
			result+=GCD(k+(i*i),k+((i+1)*(i+1)));
		}
		cout<<result<<endl;
	}
}
