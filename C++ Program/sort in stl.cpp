#include<iostream>
#include<algorithm>
using namespace std;

int main(){


int a[]={5,4,8,3,12,10,15,19,11};
int n=sizeof(a)/sizeof(int);

sort(a,a+n);
for(int i=0;i<n;i++){
	cout<<a[i]<<endl;
}


}
