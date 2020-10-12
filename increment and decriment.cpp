#include<iostream>
using namespace std;

	class Check 
		{
			private :
				int i;
				public :
					Check() : i(0) { }
					Check operator ++ ()
					{
					Check temp;
					temp.i=++i;
					return temp;		
					}
					Check operator++(int)
					{
						Check temp;
						temp.i=i++;
						return temp;
					}
				void display()
				{
					cout<<"i ="<<i<<endl;
				}
		};
int main()
{
	Check obj ,obj1;
	obj.display();
	obj1.display();
	
	obj=++obj1;
	obj.display();
	obj1.display();
	
	obj=obj1++;
	obj.display();
	obj1.display();
return 0;
}
