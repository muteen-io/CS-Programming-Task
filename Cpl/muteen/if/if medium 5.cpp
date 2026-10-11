#include<iostream>
using namespace std;
int main(){
	double t;
	cout<<"Enter total bill:\n";
	cin>>t;
	
	if(t>100){t=t*0.9;
	}
	else{t=t-0.5;}
	bool m;
	cout<<"If you are a premium member type 1 or else 0:\n";
	cin>>m;
	if(m==1){cout<<"No shipping fee.\n";
	}
	else{cout<<"Your total is "<<t+15<<endl;
	}
	return 0;}