#include<iostream>
using namespace std;
//move alll zero at the end efficient way O(N)
void moveAllAtEnd(int arr[], int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			swap(arr[i],arr[count]);
			count++;
		}
	}
}
int main(){
	int arr[]={10,8,0,0,12,0};
	moveAllAtEnd(arr,6);
	for(int i=0;i<6;i++){
		cout<<arr[i]<<" ,";
	}
	return 0;
}
