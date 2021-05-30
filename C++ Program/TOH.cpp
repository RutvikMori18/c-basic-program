#include<iostream>
using namespace std;

void toh(int n,char a,char c,char b){
	if(n==1){
		cout<<" move from 1 "<<a<<" to "<<c<<endl;
		return ;
	}
	toh(n-1,a,b,c);
	cout<<"move "<<n<<" from "<<a<<" to "<<c<<endl;
	toh(n-1,b,a,c);
}

int main(){
	int number;
	cin>>number;
	toh(number,'A','C','B');
	return 0;
}
