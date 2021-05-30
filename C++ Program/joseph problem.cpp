#include<iostream>
using namespace std;
//in this we have n people & kill a person of every kth people and this coiuld be in circular manner
int joseph(int n,int k){
	if(n==1){
		return 0;
	}
	else{
		return (joseph(n-1,k)+k)%n;
	}
	return -1;
}

int main(){
	cout<<joseph(7,3);
	return 0;
}
