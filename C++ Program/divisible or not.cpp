#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n ,k ;
	int count=0;
	cin>>n>>k;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
		for (int i=0;i<n;i++){
			if (a[i]%k==0){
				count++;
			}
		}
	cout<<count;
	return 0;
}
	
