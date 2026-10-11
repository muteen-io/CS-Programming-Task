#include <iostream>
#include <string>
using namespace std;
int main(){
	string colour;
	
	

	
	cout<<"Enter the colour(R,Y,G):"<<endl;
	cin>>colour;

	
	if(colour=="R"||colour=="Red"||colour=="red"){cout<<"Stop"<<endl;}
	else if(colour=="Y"||colour=="Yellow"||colour=="yellow"){cout<<"Slow down"<<endl;
	}
	else if(colour=="G"||colour=="Green"||colour=="green"){cout<<"Go"<<endl;
	}
	else{cout<<"Invalid signal"<<endl;}
	return 0;
	
	
	
}