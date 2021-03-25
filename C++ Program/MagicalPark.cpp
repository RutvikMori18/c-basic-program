#include<iostream>
#include<cstring>
using namespace std;

void magicalPark(char a[][100],int m,int n,int k,int s){
	bool success=true;
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			char ch=a[i][j];
			
			//check
			if(s<k){
				success=false;
			}
			if(ch=='*'){
				s +=5;
			}
			elseif(ch=='.'){
				s -=2;
			}
			else{
				break;
			}
			//we are also loose the one point when we move right expect for the last column
			if(j!=n-1){
				s--;
			}
		}
	}
	if(success){
		cout<<"yes"<<endl;
		cout<<s<<endl;
	}
	else{
		cout<<"no";
	}
}

int main(){
	int m,n,k,s;
	cin>>m>>n>>k>>s;
	char park[100][100];
	//take input
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			 cin>>park[i][j];
		}
	}
	magicalPark(park,m,n,k,s);
	
	return 0;
}
