#include<iostream>

using namespace std;
class Room
{
	public:
	int height ,lenght,breight;
	void CalArea(){
		cout<<height*lenght<<endl;
	}
	void CalVolume(){
		cout<<height*lenght*breight;
	}
};

int main(){
	Room room1;
	room1.height=3;
	room1.lenght=4;
	room1.breight=5;
	room1.CalArea();
	room1.CalVolume();
	return 0;
}
