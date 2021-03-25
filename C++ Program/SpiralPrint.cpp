#include<iostream>
#include<cstring>
using namespace std;

void spiralPrint(int a[][],int m,int n){
	int strtrow=0;
	int strtcol=0;
	int endrow=m-1;
	int endcol=n-1;
	//print it
	while(strtrow<endrow and strtcol<endcol){
		
		//firsst row
		for(int i = 0;i<endcol; i++){
			cout<<a[strtrow][i]<<" ";
		}
		strtrow++;
		
		for(int i=strtrow; i<endcol; i++){
			cout<<a[i][endcol]<<" ";
		}
		endcol--;
		
		//Bottom row
		for(int i=endcol;i>=strtcol;i--){
			cout<<a[endrow][i]<<" ";
		}
		endrow--;
		
		//strt col
		for(int i=endrow;i>=strtrow;i--){
			cout<<a[i][strtcol];
		}
		strtcol++;
	}
}
int main(){
		
		int m,n;
		cin>>m>>n;
		int a[m][n];
		int val=0;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				//print the array
				a[i][j]=val;
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		spiralPrint(a,m,n);
	return 0;
}
