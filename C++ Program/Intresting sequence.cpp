#include<iostream>
using namespace std;
int GCD(int num1,int num2){
	if(num2==0){
		return num1;
	}
	return GCD(num2,num1%num2);
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
