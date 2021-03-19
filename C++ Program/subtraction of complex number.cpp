#include<iostream>
using namespace std;

class complex{
	private:
		float imag;
		float real;
		
	public:
	 complex(){
		imag=0;
		real=0;
	}	
	void input()
	{
		cout<<"enter first real number and after imaginary number: ";
		cin>>real;
		cin>>imag;
	}
	//operator over loading....
	complex operator - (complex c2)
	{
		complex temp;
		temp.real=real-c2.real;
		temp.imag=imag-c2.imag;
		
		return temp;
	}
	void output(){
		if(imag<0){
			cout<<"the output of number :"<<real<<imag<<"i";
			
		}
		else{
			cout<<"the output of number :"<<real<<" - "<<imag<<"i";
		}
	}
};


int main()
{
	complex c1,c2,result;
	cout<<"enter first complex number : ";  
	c1.input();
	cout<<"enter second complex number : ";
	c2.input();
	
	result = c1 - c2;
	result.output();
}
