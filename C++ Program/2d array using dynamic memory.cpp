#include<iostream>
using namespace std;

int main(){
	int** arr;
	int r,c;
	cin>>r>>c;
	//create the array of row head
	arr = new int*[r];
	
	//create 2D array
	for(int i=0;i<r;i++){
		arr[i]=new int[c];
	}
	int counter=1;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++){
			arr[i][j]=counter;
			counter++;
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++){
			cout<<arr[i][j];
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
