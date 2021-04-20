#include<iostream>
#include<algorithm>
using namespace std;
//for decresing order
bool compare(int a,int b){
	return a>b;
}
int main(){
	int n,key;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,compare);//function as parameter
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	
	return 0;
}
