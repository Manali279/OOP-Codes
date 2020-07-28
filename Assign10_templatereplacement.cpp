//============================================================================
// Name        : Assign9.cpp
// Author      : 21411
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<fstream>
#include <iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

int main(int argc,char *argv[])
{
string replace_data=" ";
if(argc<4)
{
	cerr<<"\n Wrong argument. Can't put second argument...";
	exit(1);
}
char ch;
ifstream infile;
infile.open(argv[1]);
if(!infile)
{
	cerr<<"\n Can't open"<<argv[1];
	exit(1);
}
string line;
string a2=argv[2];
unsigned int found;
//cout<<string::npos;
while(infile)
{
	getline(infile,line);
	found=line.find(a2);
	while(line.find(argv[2])<500)
	{
		line.replace(found,a2.size(),argv[3]);
		found=line.find(a2);
	}
	if(infile.eof())
		break;
	replace_data=replace_data+line+"\n";
}
infile.close();
//cout<<replace_data;
string s1;
s1=replace_data;
ofstream os(argv[1]);
os<<s1;
cout<<"\n Replacement success..."<<endl;
os.close();
infile.open(argv[1]);
while(infile)
{
	getline(infile,s1);
	cout<<s1<<endl;
	if(infile.eof())
	break;
}
	return 0;
}

