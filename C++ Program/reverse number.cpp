#include<iostream>
using namespace std;

void leader(int arr[],int n){
	int currleader = arr[n-1];
	cout<<currleader<<endl;
	for(int i=n-2;i>=0;i--){
		if(arr[i]>currleader){
			currleader = arr[i];
			cout<<currleader<<endl;
		}
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	leader(arr,n);
	return 0;
}
