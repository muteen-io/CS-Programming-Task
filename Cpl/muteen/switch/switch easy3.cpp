#include <iostream>
using namespace std;
int main(){
	
	int season;
	
	cout<<"Enter number(1-4):"<<endl;
	cin>>season;
	
	switch(season){
		case 1:cout<<"Spring";
		break;
		case 2:cout<<"Summer";
		break;
		case 3:cout<<"Autumn";
		break;
		case 4:cout<<"Winter";
		break;
		default:
			cout<<"Invalid";
			break;}
			return 0;}