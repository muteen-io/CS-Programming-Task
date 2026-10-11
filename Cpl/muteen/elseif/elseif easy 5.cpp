#include<iostream>
using namespace std;
int main(){
	int marks;
	cout<<"Enter your marks:\n";
	cin>>marks;
	if(marks>=90&&marks<=100){cout<<"Grade A\n";
	}
	else if(marks>=80&&marks<=89){cout<<"Grade B\n";
	}
	else if(marks>=70&&marks<=79){cout<<"Grade C\n";
	}
	else if(marks>=60&&marks<=69){cout<<"Grade D\n";
	}
	else if(marks<60){cout<<"Fail\n";
	}
	else{cout<<"Invalid score";
	}
	return 0;
}