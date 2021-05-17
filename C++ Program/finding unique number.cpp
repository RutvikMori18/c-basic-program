#include<iostream>
using namespace std;
//finding uniquee number
int main{
	int n;
	cin>>n;
	int no[];
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>no[i];
		ans=ans^no[i];
	}
	cout<<ans<<endl;
	return 0;
}
