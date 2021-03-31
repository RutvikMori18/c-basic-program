#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int val=1;
	int m , n;
	
	cout<<"first enter the row and second enter the column : ";
	cin>>m>>n;
	int arr[m][n];
	//for display the array
		for(int row =0;row<m;row++){
		    for(int col=0;col<n;col++){
				arr[row][col]=val;
				val= val+1;
				cout<<arr[row][col]<<" ";
			}
			cout<<endl;
		}
		
		for(int i=0;i<m;i++){
			if(i%2==0){
				for(int j=0;j<n;j++){
					cout<<arr[i][j]<<" ";
				}
				cout<<endl;
			}
			else{
				for(int j=n;j>0;j--){
					cout<<arr[j][i]<<" ";
				}
				cout<<endl;
			}
		}
		return 0;
}
