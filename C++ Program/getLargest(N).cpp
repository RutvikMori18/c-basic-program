#include<iostream>
using namespace std;
//efficint way O(N)
int getLargest(int arr[],int n){
	int result=0;
	for(int i=0;i<n;i++){
		if(arr[i]>arr[i+1]){
			result=i;
		}
	}
	return result;
}

int main(){
	int arr[]={5,8,20,10};
	cout<<getLargest(arr,4);
	
	return 0;
}
