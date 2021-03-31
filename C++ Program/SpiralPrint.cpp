#include<iostream>
#include<cstring>
using namespace std;

void spiralPrint(int a[][100] , int m, int n){
	int left=0;
	int top=0;
	int bottom=m-1;
	int right=n-1;
	
	while(left<=right || top<=bottom){
		//print left to right row
		for(int i=left;i<=right;i++){
			cout<<a[top][i]<<" ,";
		}
		top=top+1;
		
		//print top to bottom right column
		for(int i=top;i<=bottom;i++){
			cout<<a[i][right]<<" ,";
		}
		right=right-1;
		
		//print right to left row
		for(int i=right;i>=left;i--){
			cout<<a[bottom][i]<<" ,";
		}
		bottom=bottom-1;
		
		//print bottom to top left
		for(int i=bottom;i>=top;i--){
			cout<<a[i][left]<<" ,";
		}
		left=left+1;
	}
}
	
int main(){
		
		int m,n;
		cin>>m>>n;
		int a[100][100];
		int val=1;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				//print the array
				a[i][j]=val;
				val++;
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		spiralPrint(a,m,n);
	return 0;
}
