#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,temp;
    int A[10];
    cin>>n;
    for (int i=0;i<=n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        for (int j=i;j<n;j++)
        {
            if(A[j]>=A[j++])
            {
                temp=A[j];
                A[j]=A[j++];
                A[j++]=temp;
            }  
        }
    }
    if(A[0]==A[1] && A[0]==A[2])
    {
        cout<<"1"<<endl;
    }
    else{
        cout<<A[0];
    }
    return 0;
}

