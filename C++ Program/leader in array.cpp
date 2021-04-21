#include<iostream>
using namespace std;
//its left all element are less than the current element so that print that element
void leader(int arr[],int n){
	int curr_ldr=arr[n-1];
	cout<<curr_ldr<<" ,";
	for(int i=n-2;i>=0;i--){
		if(curr_ldr<arr[i]){
			curr_ldr=arr[i];
			cout<<curr_ldr<<" ,";
		}
	}
}
int main(){
	int arr[]={7,10,4,3,6,5,2};
	leader(arr,7);
	return 0;
}
