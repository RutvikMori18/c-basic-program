#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	unsigned int T;
	if(1<=t && t<=100000){
		T=t;
	}
	while(T--){
		int tiles,hole_index,bounce,diffrence=0;
		cin>>tiles>>hole_index>>bounce;
		tiles+=1;
		if(hole_index%bounce==0){
			cout<<"YES"<<endl;
		}
		else if((tiles-hole_index)%bounce==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}
