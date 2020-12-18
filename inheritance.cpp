#include<iostream>
using namespace std;


class a
{
	public :
		int x;
};
class b : public a
{
	public :
		int y;
};
class c:public a
{
	int z;
};
class d : public b,public c
{
	
};

int main(){
d j;
//j.x = 10;
return 0;
}
