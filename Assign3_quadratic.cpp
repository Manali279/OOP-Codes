//============================================================================
// Name        : Assign3.cpp
// Author      : 21411
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<math.h>
using namespace std;
class quad
{
float a,b,c;
public:
	quad()
{
		a=0;
		b=0;
		c=0;
}
	quad(float l,float m,float n)
	{
		a=l;
		b=m;
		c=n;
	}
	friend istream &operator>>(istream&in,quad&l)
		{
			in>>l.a>>l.b>>l.c;
			return in;
		}

		friend ostream &operator<<(ostream&out,quad&l)
		{
			cout<<l.a<<"x^2+"<<l.b<<"x+"<<l.c<<endl;
			return out;
		}
	/*void getdata()
	{
	cout<<"Enter the values of a,b,c="<<endl;
	cin>>a>>b>>c;
	}*/

	quad operator+(quad &l)
		{

			return quad(a+l.a,b+l.b,c+l.c);
		}
	void display()
		{
			cout<<"Quadratic equation="<<endl;
			cout<<a<<"x^2+"<<b<<"x+"<<c<<endl;
		}
	int eval();
	int roots();
};
int main() {
	quad q1,q2,q3;
	int ch,d;
	cout<<"Enter first quadratic equation="<<endl;
	cin>>q1;
	cout<<q1<<endl;
	cout<<"Enter second quadratic equation="<<endl;
	cin>>q2;
	cout<<q2<<endl;
	do
		{
		cout<<"Enter the operation to be performed="
					"1.add 2.function value 3.roots=";
		cin>>ch;


			switch(ch)
			{
			case 1:
	cout<<"Addition="<<endl;
	q3=q2+q1;
	q3.display();
	cout<<endl;
	break;
			case 2:
				q3.eval();
				break;
			case 3:
				cout<<"Roots of q3="<<endl;
				q3.roots();
				break;
			default:cout<<"Entered operand is invalid";
			}
			cout<<endl<<"Do you want to do the operation(1 for yes and 0 for no)=";
				cin>>d;
				}
				while(d==1);

	return 0;
}
int quad::eval()
{int x;
cout<<"Enter the value of x="<<endl;
				cin>>x;
cout<<"Function value="<<endl;
cout<<((a*x*x)+(b*x)+c)<<endl;

	return 0;
}
int quad::roots()
{
	int r1,r2;
	if(((b*b)-(4*a*c))<0)
	{
		cout<<"Roots are imaginary"<<endl;
	}
	else
	{
		int x=(b*b)-(4*a*c);
	r1=((-b)+sqrt(x))/(2*a);
	r2=((-b)-sqrt(x))/(2*a);
	cout<<"Root 1="<<endl;
	cout<<r1<<endl;
	cout<<"Root 2="<<endl;
		cout<<r2<<endl;
	}
	return 0;
}

