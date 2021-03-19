#include<iostream>

using namespace std;
int main(){
	int a[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//complexity is O(N)
	int cs=0;
	int ms=0;
	for(int i=0;i<n;i++){
		cs=cs+a[i];
		if(cs<0){
			cs=0;
		}
		ms=max(cs,ms);
		
	}
	cout<<"maximum sum of the sub array is :"<<ms;
	
	
	return 0;
	}
