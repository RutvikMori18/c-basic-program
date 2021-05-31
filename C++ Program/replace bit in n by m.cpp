#include<iostream>
using namespace std;
//replace bits in n by m
//e.g = ip=10000000000
//m=10101,i=2,j=6
//output=10001010100

int clearRangeItoJ(int n,int i,int j){
	int ones=(~0);
	int a = ones<< (j + 1);
	int b = (1<<i) - 1;
	int mask = a | b;
	int ans = n & mask;
	return ans;
}

int replaceBit(int n,int m,int i,int j){
	int n_ = clearRangeItoJ( n, i, j);
	int ans = n_ | (m << i);
	return ans;
}

int main(){
	int n = 15;
	int i = 1;
	int j = 3;
	int m = 2;
	cout<<replaceBit(n,m,i,j)<<endl;
	return 0;
}
