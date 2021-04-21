#include<iostream>
using namespace std;
void reverse(int arr[],int n){
	int low=0;
	int high=n-1;
	while(low<high){
		swap(arr[low],arr[high]);
		low++;
		high--;
	}
	for(int i=low;i<high;i++){
		cout<<arr[i]<<" ,";
	}
}
int main(){
	int arr[]={10,8,5,30};
	reverse(arr,4);
	for (int i=0;i<4;i++){
		cout<<arr[i]<<" ,";
	}
	
	return 0;
}
