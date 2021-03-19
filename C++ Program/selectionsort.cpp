#include<iostream>

using namespace std;
void selection_sort(int a[] , int n ){
	for(int i=0;i<=n;i++){
		int min_index=i;
		for(int j=i;j<=n-1;j++){
			if(a[j]<a[min_index]){
				min_index=j;
				
			}
		}
		swap(a[i],a[min_index]);
	}
	
}

int main(){
	int n;
	cout<<"enter the number N : ";
	cin>>n; 
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	selection_sort(a,n);
	cout<<"the sort is done using selection sort : ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ,";
	}
}
