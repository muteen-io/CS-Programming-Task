#include<iostream>
using namespace std;
int main(){
	int year;
	cout<<"Enter year:\n";
	cin>>year;
	
	if(year<=0){cout<<"Invalid year.\n";
	}
	else if(year%400==0){cout<<"Centurial Leap year.\n";
	}
	else if(year%100==0){cout<<"century year.\n";
	}
	else if(year%4==0){cout<<"Standard Leap year.\n";
	}
	else{cout<<"Common year.\n";
	}
	return 0;}