//============================================================================
// Name        : Assign7.cpp
// Author      : 21411
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string.h>
using namespace std;
class personal
{
	char name[30];
	int number;
public:
	personal()
{
		cout<<"Personal Constructor"<<endl;
		strcpy(name,"xyz");
		number=0000000;
}
	void getdata()
	{
		cout<<"Enter name=";
		cin>>name;
		cout<<endl;
		cout<<"Enter number=";
		cin>>number;
		cout<<endl;
	}
	void putdata()
	{
		cout<<"Personal information="<<endl;
		cout<<name<<endl;
		cout<<number<<endl;
	}
	~personal()
	{
		cout<<"Personal destructor"<<endl;
	}
};
class academic
{
	char qualification[30];
	int marks ;
public:
	academic()
{
		cout<<"Academic Constructor"<<endl;
		strcpy(qualification,"xyz");
		marks=0;
}
	void getdata()
	{
		cout<<"Enter qualification=";
		cin>>qualification;
		cout<<endl;
		cout<<"Enter marks=";
		cin>>marks;
		cout<<endl;
	}
	void putdata()
	{
		cout<<"Academic information="<<endl;
		cout<<qualification<<endl;
		cout<<marks<<endl;
	}
	~academic()
	{
		cout<<"Academic destructor"<<endl;
	}
};
class professional
{
	char profession[30];
	int exp ;
public:
	professional()
{
		cout<<"Professional Constructor"<<endl;
		strcpy(profession,"xyz");
		exp=0;
}
	void getdata()
	{
		cout<<"Enter profession=";
		cin>>profession;
		cout<<endl;
		cout<<"Enter no. of experience years=";
		cin>>exp;
		cout<<endl;
	}
	void putdata()
	{
		cout<<"Professional information="<<endl;
		cout<<profession<<endl;
		cout<<exp<<endl;
	}
	~professional()
	{
		cout<<"Professional destructor"<<endl;
	}
};
class emp:public personal,public professional,public academic
{
public:
	emp()
		{
		cout<<"Employee constructor"<<endl;
		}
	void getdata()
	{
		personal::getdata();
		professional::getdata();
		academic::getdata();
	}
	void putdata()
	{
		personal::putdata();
		professional::putdata();
		academic::putdata();
	}
	~emp()
	{
		cout<<"Employee destructor"<<endl;
	}
};
int main()
{
	emp e;
	e.getdata();
	e.putdata();
	return 0;
}
