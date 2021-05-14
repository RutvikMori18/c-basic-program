#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;

class car{
	public:
	 string car_name;
	 int x,y;
	 car(){
	 }
	 car(string n,int x,int y){
	 	car_name=n;
	 	this->x=x;
	 	this->y=y;
	 }
	 int distance(){
	 	//return the distance from origin
	 	return x*x +y*y;
	 }
};

bool compare(car a,car b){
	int da=a.distance();
	int db=b.distance();
	
	if(da==db){
		return a.car_name.length() < b.car_name.length();
	}
	return da < db;
}
	
int main(){
	int n;
	cin>>n;
	vector<car> v;
	
	for(int i=0;i<n;i++){
		int x,y;
		string name;
		cin>>name;
		cin>>x>>y;
		
		car temp(name,x,y);
		v.push_back(temp);
		
	}
	sort(v.begin(),v.end(),compare);
	for(auto c:v){
		cout<<"CAR name :"<<c.car_name<<"distance: "<<c.x<<","<<c.y<<endl;
	}
	return 0;
}
