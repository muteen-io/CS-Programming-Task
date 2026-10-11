#include <iostream>
using namespace std;
int main(){
	int age;
	bool isstudent;
	

	
	cout<<"Enter the age"<<endl;
	cin>>age;
    cout<<"If student type 1 or type 0"<<endl;
	cin>>isstudent;
	
	if(age<12){cout<<"Price is $12."<<endl;}
	else if(age<=60&&isstudent==1){cout<<"Price is $8."<<endl;
	}
	else if(age<=60&&isstudent==0){cout<<"Price is 12$"<<endl;
	}
	else{cout<<"Price is $6."<<endl;}
	return 0;
	
	
	
}