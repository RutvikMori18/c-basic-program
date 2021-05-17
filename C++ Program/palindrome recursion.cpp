#include<iostream>
using namespace std;

bool ispal(string str,int s,int e){
	if(s==e){
		return true;
	}
	if(s>e){
		return true;
	}
	if(str[s]!=str[e]){
		return false;
	}
	return ispal(str,s+1,e-1);
}
int main(){
	string str="abccba";
	bool res=ispal(str,0,5);
	if(res){
		cout<<"the number is palindrome";
	}
	else{
		cout<<"the number is not palindrome";
	}
	
	return 0;
}
