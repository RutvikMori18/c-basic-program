#include<iostream>
using namespace std;
//second element using naive approch O(N^2)

int getLargest(int arr[],int n){
	int largest=0;
	for(int i=0;i<n;i++){
		if(arr[i]>arr[i+1]){
			largest=i;
		}
	}
	return largest;
}
int secondLargest(int arr[],int n){
	int largest=getLargest(arr,n);
	int result=-1;
	for(int i=0;i<n;i++){
		if(arr[i]!=arr[largest]){
			if(result==-1){
				result=i;
			}
			else if(arr[i]>arr[result]){
				result=i;
			}
		}
	}
	return result;
}

int main(){
	int arr[]={5,8,10,12,20};
	cout<<secondLargest(arr,5);
	
	return 0;
}
