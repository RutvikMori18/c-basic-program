#include<iostream>
using namespace std;
//stock buy and sell problem O(N^2)
int maxProfit(int price[],int start,int end){
	if(end<=start){
		return 0;
	}
	int profit=0, currProfit;
	for(int i=start;i<end;i++){
		for(int j=i+1;j<end;j++){
			if(price[j]>price[i]){
				currProfit=price[j]-price[i]+
				//find the rest stock profit using recursion
				maxProfit(price,j+1,end);		
			}
			profit=max(profit,currProfit);
		}
	}
	return profit;
}

int main(){
	int arr[]={1,5,3,1,2,8};
	cout<<maxProfit(arr,0,6);
}
