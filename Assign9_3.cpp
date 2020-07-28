#include<iostream>
#include<fstream>
using namespace std;
class student
{
	int age;
	char name[50];
public:
	student()
{
		age=0;
		//name="xyz";
}
	void getdata()
	{
		cout<<"Enter age and name="<<endl;
		cin>>age>>name;
	}
	void putdata()
	{
		cout<<age<<" "<<name<<endl;
	}
};
int main()

{
	int ch;
student s;
fstream of("8-3.txt",ios::in|ios::out|ios::binary|ios::app);
do
{
	s.getdata();
	of.write((char*)&s,sizeof(s));
	cout<<"Do you want one more student data(1 for yes and 0 for no)?";
	cin>>ch;

}while(ch==1);
of.seekg(0);
	while(of)
	{
		of.read((char*)&s,sizeof(s));
		if(of.eof())
			break;
		s.putdata();
	}
	return 0;
}
