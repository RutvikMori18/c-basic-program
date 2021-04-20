#include<iostream>
using namespace std;

int main(){
	//memory allocation 
	int arr[100];
	cout<<sizeof(arr);//static
	
	int n;
	cin>>n;
	int *b=new int [n];//dynamic allocation
	cout<<sizeof(b)<<endl;
	
	for (int i=0;i<n;i++){
		cin>>b[i];
		cout<<b[i]<<endl;
	}
	
	delete [] b;
	
	return 0;
}
