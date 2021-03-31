#include<iostream>

using namespace std;

void Search(int a[100][100],int key,int row,int col){
	int top=0;
	int right=col-1;
		while(top<=right){
			if(a[top][right]==key){
						
				break;
			}
			if(a[top][right]!=key &&a[top][right]<key){
				top=top+1;
			}
			else{
				right=right-1;
			}
		}
	cout<<"element found at "<<top+1<<" th row and "<<right+1<<"th column"<<endl;		
}

int main(){
	int n,m,key;
	cin>>n>>m;
	int counter=1;
	int a[100][100];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			a[i][j]=counter;
			cout<<a[i][j]<<" ";
			counter++;
		}
		cout<<endl;
	}	
	cin>>key;
	Search(a,key,n,m);

return 0;
}
