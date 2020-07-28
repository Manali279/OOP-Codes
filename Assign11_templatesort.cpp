//============================================================================
// Name        : Assign10.cpp
// Author      : 21411
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
template<class T>
void sort(T a[],int n)
{
	int i,j;
	T c;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	cout<<"Selection sorted no.="<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i];
		cout<<endl;
	}
}
int main() {
	int n,a[30];
	cout<<"How many integer numbers=";
	cin>>n;
	cout<<"Enter given integer numbers="<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,n);
	int m;
	float b[30];
	cout<<"How many float numbers=";
		cin>>m;
		cout<<"Enter given float numbers="<<endl;
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
		}
		sort(b,m);
	return 0;
}
