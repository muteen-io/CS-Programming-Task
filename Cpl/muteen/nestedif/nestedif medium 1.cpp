#include <iostream>
using namespace std;
int main(){
	
	int age;
	bool hasid;
	cout<<"Enter your age:"<<endl;
	cin>>age;
	
	if(age>=18){
		cout<<"If you have ID type 1 or 0:"<<endl;
	    cin>>hasid;
		if(hasid==1){cout<<"welcome in\n";
		}
		else{cout<<"Bring your ID.\n";
		}}
	else{cout<<"Not allowed\n";
	}	
	return 0;
	}