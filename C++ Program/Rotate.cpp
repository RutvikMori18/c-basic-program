#include<iostream>
#include<algorithm>
using namespace std;

void Rotate(int a[][100],int n){
	//reverse each row
	for(int row=0;row<n;row++){
		int strtcol=0;
		int endcol=0;
		while(strtcol<endcol){
			swap(a[row][strtcol],a[row][endcol]);
			strtcol++;
			endcol--;
		}
	}
	//take the transpose of matrix
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			swap(a[i][j],a[j][i]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}

}

int main(){
	int a[100][100];
	int n;
	cin>>n;
	//take the array from the user
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}	
	Rotate(a,n);
	
}
