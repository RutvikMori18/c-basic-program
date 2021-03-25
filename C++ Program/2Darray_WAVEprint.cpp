#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int counter=1;
	int m , n;
	cout<<"first enter the row and second enter the column : ";
	cin>>m,n;
	int a[m][n];
	//for display the array
		for(int row =0;row<=m-1;row++){
		    for(int col=0;col<=n-1;col++){
				a[row][col]=counter;
				counter=counter+1;
				cout<<a[row][col]<<" ";
			}
		cout<<endl;
		}
	//wave print
	for (int col=0;col<n;col++){
		//for even top-down approch
		if(col%2==0){
			for(int row=0;row<m;row++){
				cout<<a[row][col];
			}
		}
		else{
			//for odd bottom up approch
			for(int row=m-1;row>=0;row--){
				cout<<a[row][col]<<" ";
			}
		}
		
	}
	return 0;
}
