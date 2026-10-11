#include <iostream>
using namespace std;
int main(){
	
	int n;
	
	cout<<"Enter your marks:"<<endl;
	cin>>n;
	
	if(n>=90){cout<<"A\n";
	}
	else if(n>=80&&n>=89){cout<<"B\n";
	}
	else if(n>=70&&n>=79){cout<<"C\n";
	}
	else{cout<<"F\n";
	}
	
	
	return 0;
	}