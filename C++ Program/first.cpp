#include<iostream>
#include<vector>
using namespace std;

void func(int ind,vector<int> &ds,int arr[],int n){
	if(ind == n){
		for(auto it: ds){
			cout<<it<<" ";
		}
		cout<<endl;
		return;
	}
	ds.push_back(arr[ind]);
	func(ind+1,ds,arr,n);
	ds.pop_back();
	
	func(ind+1,ds,arr,n);
}
int main(){
      int idx=0;
      int n=3 ;
      
      int arr[]={1,2,3};
	  vector<int> ds;
	func(idx,ds,arr,n);
	
	
	return 0;
	
}
