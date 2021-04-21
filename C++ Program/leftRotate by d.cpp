#include<iostream>
using namespace std;
//left rotate by d element O(N) with space extra space d
void leftRotate(int arr[],int n,int d){
	int temp[d];
	for(int i=0;i<d;i++){
		temp[i]=arr[i];
	}
	for(int i=d;i<n;i++){//shift element after d element
		arr[i-d]=arr[i];
	}
	for(int i=0;i<d;i++){
		arr[n-d+i]=temp[i];
	}
	
}
int main(){
	int arr[]={1,11,21,31,41,51};
	leftRotate(arr,6,3);
	for(int i=0;i<6;i++){
		cout<<arr[i]<<" ,";
	}
	return 0;
}
