#include<iostream>
using namespace std;
//array rotate by d element O(N) eith extraspace(1)

void reverse(int arr[],int low,int high){
	while(low<high){
		swap(arr[low],arr[high]);
		low++;
		high--;
	}
}
void rotatebyd(int arr[],int n,int d){
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);
}



int main(){
	int arr[]={1,2,3,4,5};
	rotatebyd(arr,5,2);
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ,";
	}
	return 0;
}
