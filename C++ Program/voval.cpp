#include<iostream>
using namespace std;

int main()
{
	char vowel;
	int isLower,isUpper;
	cout<<"enter the only one character:";
	cin>>vowel;
	isLower =  (vowel=='a' || vowel=='e' || vowel=='i' || vowel=='o' || vowel=='u');
	
	isUpper = (vowel=='A' || vowel=='E' || vowel=='I' || vowel=='O' || vowel=='U');
	if(isLower || isUpper)
		cout<<"the character is vowel";
	else
		cout<<"the charater is not wowel";	
}
