#include<iostream>
using namespace std;
int main()
{
	char input;
	cout<<"Enter any Character(lower case)"<<endl;
	cin>>input;
	if(input=='a'||input=='e'||input=='i'||input=='o'||input=='u')
	{
		cout<<"Vowel"<<endl;
	}
	else
	{
		cout<<"Consonant"<<endl;
	}
	return 0;
}
