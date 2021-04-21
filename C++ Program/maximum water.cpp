#include<iostream>
using namespace std;
//find maximum water in the boxes O(N^2)
int getWater(int arr[],int n){
	int result=0;
	//because we can not put the waer at both the end
	for(int i=1;i<n-1;i++){
		int lmax=arr[i];
		//find left max
		for(int j=0;j<i;j++){
			lmax=max(lmax,arr[j]);
		}
		//find right max
		int rmax=arr[i];
		for(int j=i+1;j<n;j++){
			rmax=max(rmax,arr[j]);
		}
		//update the result
		result= result + (min(lmax,rmax)-arr[i]);
	}
return result;
}
int main()
{
    int arr[] = {5,0,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
     
    cout << getWater(arr, n);
     
    return 0;
}
