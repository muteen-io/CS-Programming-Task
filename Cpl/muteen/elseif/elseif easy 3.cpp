#include <iostream>

using namespace std;
int main(){
	
	int age;

	
	cout<<"Enter the age:"<<endl;
	cin>>age;

	
	if(age<13){cout<<"Child"<<endl;}
	else if(age<=19){cout<<"Teenage"<<endl;
	}
	else{cout<<"Adult"<<endl;}
	return 0;
	
	
	
}