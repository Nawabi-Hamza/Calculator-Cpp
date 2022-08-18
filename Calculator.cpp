#include<iostream>
#include<windows.h>
#include<math.h>
using namespace std;
int main(){
	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color,12);
	float a,b;
	char s;
	cout<<"Please Enter Frist Number : ";
	cin>>a;
	cout<<"Please Enter Second Number : ";
	cin>>b;
	cout<<"Please Select Your Opration (+ - * /) : ";
	cin>>s;
	SetConsoleTextAttribute(color,2);
	if (s=='+'){
		cout<<a<<"+"<<b<<"= "<<a+b<<endl;
	}
	
	 else if (s=='-'){
		cout<<a<<"-"<<b<<"= "<<a-b<<endl;
	}
	
	else if (s=='*'){
		cout<<a<<"*"<<b<<"= "<<a*b<<endl;
	}
	else if (s=='/'){
		cout<<a<<"/"<<b<<"= "<<a/b<<endl;
	}

	else {cout<<"This is not in program !"<<endl;
	}
		SetConsoleTextAttribute(color,3);
	cout<<"This is made it by Hamza-Nawabi"<<endl;
	system("pause");
	
	return 0;
}
