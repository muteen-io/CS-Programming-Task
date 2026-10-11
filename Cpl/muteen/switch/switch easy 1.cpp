#include <iostream>
using namespace std;
int main(){
	
	char fruit;
	
	cout<<"Enter an alphabet(a,b,c):"<<endl;
	cin>>fruit;
	
	switch(fruit){
		case 'a':
		case'A':
		cout<<"Apple";
		break;
		case 'b':
		case'B':
		cout<<"Orange";
		break;
		case 'c':
		case'C':
		cout<<"Mango";
		break;
		default:
		cout<<"Unknown";
		break;}
	return 0;
	}