//============================================================================
// Name        : Assign4.cpp
// Author      : 21411
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;

int main()
{
	int a,b,ch,d;
	cout<<"Enter a=";
	cin>>a;
	cout<<"Enter b=";
	cin>>b;

	do{
cout<<"Enter the operation to be performed="
			"1.add 2.subtract 3.divide 4.multiply=";
cin>>ch;


	switch(ch)
	{
	case 1:
		cout<<"Addition=";
		cout<<a+b;
		break;
	case 2:
		cout<<"Subtraction=";
		cout<<a-b;
		break;
	case 3:
		if(b!=0)
		cout<<"Division=";
				cout<<a/b;
			if(b==0)
	cout<<"b cannot be non-zero";
				break;
	case 4:
		cout<<"Multiplication=";
		cout<<a*b;
		break;
	default:cout<<"Entered operand is invalid";
	}

	cout<<endl<<"Do you want to do the operation(1 for yes and 0 for no)=";
	cin>>d;
	}
	while(d==1);

	return 0;
}



