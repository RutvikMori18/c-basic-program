#include<iostream>
using namespace std;
//move all zero at the end
void MovetoEnd(int arr[],int n){
	for(int i=0;i<n;i++){
		
		if(arr[i]==0){
			for(int j=i+1;j<n;j++){
				if(arr[j]!=0){
					swap(arr[i],arr[j]);
				}
			}
		}
	}
}
int main(){
	int arr[]={10,5,8,0,8,0,9,0};
	MovetoEnd(arr,8);
	for(int i=0;i<8;i++){
		cout<<arr[i]<<" ,";
	}
	
	return 0;
}
