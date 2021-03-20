#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char s[100]="today is a rainey day";
	
	char *ptr=strtok(s," ");
	cout<<ptr<<endl;
	//it is always prints the first token
	//for print every token we will use the NULL
	while(ptr!=NULL){
		ptr=strtok(NULL," ");
		cout<<ptr<<endl;
	}
	
	return 0;
}
