#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream os("8-1.txt");
	os<<"I learn in PICT"<<endl;
os<<"I am in 2nd year"<<endl;
ifstream is("8-1.txt");
char buffer[100];
while(is)
{
	is.getline(buffer,100);
			cout<<buffer<<endl;
}
	return 0;
}
