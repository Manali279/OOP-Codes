//============================================================================
// Name        : Assign2.cpp
// Author      : 21411
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class complex
{
	float real,imag;
public:
	complex()
{
		real=0;
		imag=0;

}
	friend istream &operator>>(istream&in,complex&r)
	{
		in>>r.real>>r.imag;
		return in;
	}

	friend ostream &operator<<(ostream&out,complex&r)
	{
		out<<r.real<<"+i"<<r.imag<<endl;
		return out;
	}
	complex(float r,float i)
	{
		real=r;
		imag=i;
	}
/*	void getdata()
	{
		cout<<"Enter complex no.=";
		cin>>real>>imag;

	}*/
	complex operator+(complex &r)
	{

		return complex(real+r.real,imag+r.imag);
	}
	void display()
	{
		cout<<real<<"+i"<<imag;
	}
	complex operator-(complex &r)
		{

			return complex(real-r.real,imag-r.imag);
		}
	complex operator*(complex &r)
			{

				return complex((real*r.real-imag*r.imag),(imag*r.real+real*r.imag));
			}
	complex operator/(complex &r)
				{
float num=real*r.real+imag*r.imag;
float den=real*real+imag*imag;
float im=real*r.imag-imag*r.real;

					return complex((num/den),(im/den));
				}
};
int main()
{
	complex d1,d2,d3,d4,d5,d6;
int ch,d;
	/*d1.getdata();
	d2.getdata();*/
cout<<"Enter first complex no.="<<endl;
	cin>>d1;
	cout<<d1;
	cout<<"Enter second complex no.="<<endl;
	cin>>d2;
	cout<<d2;
	do
	{
	cout<<"Enter the operation to be performed="
				"1.add 2.subtract 3.divide 4.multiply=";
	cin>>ch;


		switch(ch)
		{
		case 1:
			cout<<"Addition=";
			d3=d2+d1;
		d3.display();
	cout<<endl;
	break;
		case 2:
	cout<<"Subtraction=";
	d4=d2-d1;
	d4.display();
	cout<<endl;
	break;
		case 3:
			cout<<"Division=";
			d6=d2/d1;
			d6.display();
			cout<<endl;
			break;
		case 4:
	cout<<"Multiplication=";
	d5=d2*d1;
	d5.display();
	cout<<endl;
	break;
		default:cout<<"Entered operand is invalid";
		}
		cout<<endl<<"Do you want to do the operation(1 for yes and 0 for no)=";
			cin>>d;
			}
			while(d==1);
	return 0;
}
