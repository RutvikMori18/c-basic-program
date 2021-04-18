#include<iostream>
using namespace std;
//naive solution O(N^2)
int getLargest(int arr[] , int n){
	for (int i=0;i<n;i++){
		bool flage=true;
		for(int j=0;j<n;j++){
			if(arr[j]>arr[i]){
				flage=false;
				break;
			}
		}
		if(flage==true)
			return i;
	}
	return -1;
}
int main(){
	int arr[]={5,8,20,10};
	cout<<getLargest(arr,4);
	
	return 0;
}
