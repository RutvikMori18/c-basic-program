#include<iostream>
using namespace std;
//find maximum water in the boxes O(N) with two extra array

int getWater(int arr[],int n){
	int result=0;
	int lmax[n],rmax[n];
	lmax[0]=arr[0];
	rmax[n]=arr[n];
	//find lmax
	for(int i=1;i<n;i++){
		lmax[i]=max(arr[i],lmax[i-1]);
	}
	rmax[n-1]=arr[n-1];
	//find rmax
	for(int i=n-1;i>=0;i--){
		rmax[i]=max(arr[i],rmax[i+1]);
	}
	//update the result
	for(int i=0;i<n-1;i++){
		result = result + (min(lmax[i],rmax[i]) - arr[i]);
	}
return result;
}

int main(){
	int arr[] = {5,0,6,2,3};
	int n=sizeof(arr)/sizeof(int);
	
	cout<<getWater(arr,n);
	return 0;
}
