#include<iostream>
#include<algorithm>
using namespace std;

bool ispossible(int arr[],int n,int m,int curr_min){
	int studentused = 1;
	int pages_reading=0;
	
	for(int i=0;i<n;i++){
		
		if(pages_reading+arr[i]>curr_min){
			studentused++;
			
			pages_reading=arr[i];
			if(studentused>m){
				return false;
			}
			else{
				pages_reading += arr[i];
			}
		}
		
	}
	return true;
}

int findpage(int arr[],int n,int m){
	long sum=0;
	if(n<m){
		return -1;
	}
	//count the number of pages
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	int s=arr[n-1];
	int e=sum;
	int ans=INT_MAX;
	
	while(s<=e){
		int mid=(s+e)/2;
		
		if(ispossible(arr,n,m,mid)){
			ans=min(ans,mid);
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return ans;
}

int main(){
	int t;
	cin>>t;
	int n,m;
	int arr[100];
	
	for(int i=0;i<t;i++){
		
		cin>>n>>m;
		
		for(int j=0;j<n;j++){
			cin>>arr[i];
		}
		cout<<findpage(arr,n,m);
	}

	return 0;
}
