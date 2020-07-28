//============================================================================
// Name        : Assign8.cpp
// Author      : 21411
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include<fstream>
using namespace std;

int main() {
	int a=5;
	string s1="Hello!";
	string s2="PICT";
	ofstream os("21411.txt");
	os<<a<<endl;
os<<s1<<" "<<s2<<endl;
cout<<"File writing done!!!"<<endl;
ifstream is("21411.txt");
is>>a>>s1>>s2;
cout<<a<<endl;
cout<<s1<<endl;
cout<<s2<<endl;

	return 0;
}
