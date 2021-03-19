#include<iostream>

using namespace std;

int main(){
			 //enter the code
			int mark[4]={10,20,30,40};
			cout<<mark[0]<<endl;
			cout<<mark[1]<<endl;
			cout<<mark[2]<<endl;
			cout<<mark[3]<<endl;
			
			int*p=mark;
			cout<<"0="<<*p<<endl;
			cout<<"0="<<*(p++)<<endl;
			cout<<"1="<<*(p++)<<endl;
			cout<<"2="<<*(p++)<<endl;
			cout<<"3="<<*(p++)<<endl;			 
			 return 0;
	 }

