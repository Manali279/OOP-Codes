//============================================================================
// Name        : Assign8-2.cpp
// Author      : 21411
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<fstream>
using namespace std;

int main() {
	int a[5],a1[5];
	cout<<"Enter five nos.= "<<endl;
	for(int i=0;i<5;i++)
	cin>>a[i];
	ofstream os("8-2.txt");
	os.write((char*)a,5*sizeof(int));
ifstream is("8-2.txt");
is.read((char*)a1,5*sizeof(int));
for(int i=0;i<5;i++)
{
	cout<<a1[i]<<endl;
}
is.close();

	return 0;
}
