#include<iostream>
using namespace std;
//reverse the array in O(N)
void reverse(int arr[],int n){
int high=n-1;
int low=0;
	while(low<high){
		swap(arr[low],arr[high]);
		low++;
		high--;
	}	
}

int main(){
	int arr[]={1,2,4,5,6,7,3};
	reverse(arr,7);
	for(int i=0;i<7;i++){
		cout<<arr[i]<<" ,";
	}
return 0;
}
