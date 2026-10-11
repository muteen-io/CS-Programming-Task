#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter three sides of triangle:"<<endl;
	cin>>a>>b>>c;
	if(a+b>c&&b+c>a&&a+c>b ){cout<<"Triangle"<<endl;
	if(a==b==c){cout<<"Equilateral Triangle.\n";
	}
	else if(a==b||b==c||c==a){cout<<"Isosceles Triangle.\n";
	}
    else{cout<<"Scalene Triangle.\n";
    }
	}
	else{cout<<"Not Triangle"<<endl;
    }
       return 0;}