#include<iostream>
using namespace std;

int countsubstr(int arr[],int n,int sum){
	if(n==0){
		return (sum==0) ? 0:1;
	}
	return countsubstr( arr,n-1,sum-arr[n-1]);
}

int main (){
	int a[]={10,5,2,3,6};
	cout<<countsubstr(a,5,8);
}
