#include <iostream>
using namespace std;
int main(){
	
	int drink;
	int size;
	
	cout<<"Enter number(1-2)\n:"<<endl;
	cin>>drink;
	cout<<"Enter size(1-3)\n";
		cin>>size;
	
	switch(drink){
		case 1:cout<<"Tea\n";
		
		switch(size){
			case 1:cout<<"Small\n";break;
			case 2:cout<<"Medium\n";break;
			case 3:cout<<"Large\n";break;
	    }
	    break;
	    
		case 2:cout<<"Coffee\n";
		
		{switch(size){
			case 1:cout<<"Small\n";break;
			case 2:cout<<"Medium\n";break;
			case 3:cout<<"Large\n";break;}
				break;
			}
			
		}
		return 0;
		}