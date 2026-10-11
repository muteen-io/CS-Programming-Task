#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter number:\n";
	cin>>n;
	
	if(n<0){n=-n;}
	else{n=n;}
	
	if(n%2==0){cout<<"Even number.\n";
	}
	else{cout<<"Odd number.\n";
	}
	return 0;
}