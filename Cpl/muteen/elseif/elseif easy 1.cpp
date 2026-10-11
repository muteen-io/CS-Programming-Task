#include <iostream>
using namespace std;
int main(){
	
	int temp;
	
	cout<<"Enter temperature:"<<endl;
	cin>>temp;
	
	if(temp>35){std::cout<<"Hot\n";
	}
	else if(temp>=20&&temp<=35){
		std::cout<<"Nice\n";
	}
	else{std::cout<<"Cold\n";}
	
	return 0;
	}