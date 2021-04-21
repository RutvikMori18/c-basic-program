#include<iostream>
using namespace std;
//second largest in O(n)
int secondLargest(int arr[],int n){
	int res=-1;
	int largest=0;
	for(int i=1;i<n;i++){
		if(arr[i]>arr[largest]){
			res=largest;
			largest=i;
		}
		else if(arr[i]!=arr[largest]){
			if(res==-1||arr[i]>arr[res]){
				res=i;
			}
		}
	}
	return res;
}
int main(){
	int arr[]={5,8,12,20};
	cout<<secondLargest(arr,4);
	return 0;
}
