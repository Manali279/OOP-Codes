//============================================================================
// Name        : Assign13.cpp
// Author      : 21411
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<iterator>
#include<algorithm>
#include <iostream>
#include<string.h>
using namespace std;

class person
{
public:
	string name;
	string dob;
	long int phone;
	int n;
	person()
{
		name="xyz";
		dob="00/00/0000";
		phone=0000000000;
		n=0;
}
	void input()
	{
		cout<<"Enter name="<<endl;
		cin>>name;
		cout<<"Enter date of birth="<<endl;
		cin>>dob;
		cout<<"Enter phone no.="<<endl;
		cin>>phone;
	}
	void display()
	{

		cout<<name<<"\t"<<dob<<"\t"<<phone<<endl;
	}

	string getName()
	{
		return name;
	}
};
bool compare_name(person p,person q)
{
	return (p.name<q.name);
}

int main() {
	string search_name;
	int i,n;
	person p[50];
	string s[50];
	cout<<"Enter how many records="<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	p[i].input();
	}
	sort(p,p+n,compare_name);
	cout<<"Record="<<endl;
	for(int i=0;i<n;i++)
		{
		p[i].display();
		}
	for(int i=0;i<n;i++)
		{
			s[i]=p[i].getName();
		}
	cout<<"Enter name="<<endl;
cin>>search_name;
if(binary_search(s,s+n,search_name))
	cout<<"Record found"<<endl;
else
	cout<<"Record not found"<<endl;
	return 0;
}
