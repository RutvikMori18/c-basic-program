#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     int number;
     cin>>number;
     
	 for(int i=0;i<=number;i++){
     
	 	string S,s1,s2;
     	cin>>S;
     	int j=0;
     	while(S[j]){
     		j++;
		 }
     	
     	 for(int i=0;i<j;i++)
     	{
         if(i%2==1){
             s1+=S[i];
         }
         else{
             s2+=S[i];
         }
         
     	}
	 cout<<s1<<" "<<s2<<endl;
	 }
    
    return 0;
}

