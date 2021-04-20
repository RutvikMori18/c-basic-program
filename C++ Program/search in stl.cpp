#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int arr[]={0,1,5,3,8,9,10,77,20};
	int n=sizeof(arr)/sizeof(int);
	int key=77;
	
	int it=find(arr,arr+n,key);
	cout<<it<<endl;//it will give the address of the key element
	
	int index=it-arr;
	cout<<indec<<endl;
	
	if(key==n){
		cout<<"key not found"<<endl;
	}
	else{
		cout<<"key present at index: "<<index;
	}

return 0;
}
