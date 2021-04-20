#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int arr[]={20,30,40,50,100,1000};
	int n=sizeof(arr)/sizeof(int);
	int key =50;
	//search in soorted array
	bool present =binary_search(arr,arr+n,key);
	if(present){
		cout<<"present";
	}
	else{
		cout<<"absent";
	}
	
	//two more thing 
	//get the index of element
	//lower_bound(s,e,key)(>=) and upper_bount(s,e,key)(>)
	int* lb=lower_bound(arr,arr+n,key);
	cout<<*lb<<endl;
}
