#include<iostream>
#include<algorithm>
using namespace std;
//rope cotting problem

int maxcut(int n,int a,int b,int c){
	if(n<0){
		return -1;
	}
		
	
	int res = max(maxcut(n-a,a,b,c),maxcut(n-b,a,b,c),maxcut(n-c,a,b,c));
	
	if(res==-1){
		return -1;
	}	
	return (res+1);
}

int main(){
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	cout<<maxcut(n,a,b,c);
return 0;
}
