#include<iostream>
#include<list>
using namespace std;
//iterator
template<typename T>
int search(T arr[],int n,T key){
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			return i;
		}
	}
	return n;
}
//template + Iterator
template <class ForwardIterator,class T>

ForwardIterator search(ForwardIterator start,ForwardIterator end, T key){
	while(start!=end){
		if(*start==key){
			return start;
		}
		start++;
	}
	return end;
}
int main(){
	list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(5);	
	l.push_back(3);		
	
	auto it=search(l.begin(),l.end(),5);
	if(it==l.end()){
		cout<<"element not found"<<endl;
	}
	else{
		cout<<*it<<endl;
	}
	return 0;
	
}
