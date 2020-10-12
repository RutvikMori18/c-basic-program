#include<iostream>
using namespace std;
int main(){

int N; 

cin>>N;

if( N%2 == 1 || (N > 5 && N < 21))

    printf("Weird");

else

    printf("Not Weird");

return 0;
}
