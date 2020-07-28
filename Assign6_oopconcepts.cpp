#include<iostream>
#include<string.h>
using namespace std;
class database
{
char address[30],license[20],insurance[20];
long int contact;
public:
database() //Default constructor
{
strcpy(address,"XYZ");
strcpy(license,"XY-0000000000");
strcpy(insurance,"XY00000000X");
contact=000000000;
}
~database() //Destructor
{
cout<<"I am in Destructor";
}
friend class person;
};

class person
{
char *name, dob[10], blood[10];
float ht,wt;
static int count; // Static variable
database *p;
public:
person() //Default constructor
{
strcpy(name,"XYZ");
strcpy(dob,"dd/mm/yy");
strcpy(blood,"A +");
ht=0;
wt=0;
p=new database;
}
person(person*p1) //Copy constructor
{
strcpy(name,p1->name);
strcpy(dob,p1->dob);
strcpy(blood,p1->blood);
ht=p1->ht;
wt=p1->wt;
p=new database;
strcpy(p->address,p1->p->address);
strcpy(p->license,p1->p->license);
strcpy(p->insurance,p1->p->insurance);
p->contact=p1->p->contact;
}
static void showcount() //Static member function
{
cout<<"\nNo of records count="<<count<<"\n";
}
~person()
//Destructor
{
cout<<"\nI am in Destructor\n";
}
void getdata(char name[20]);
inline void display();
// Inline function
};
void person::getdata(char name[20])
{
strcpy(this->name,name);
//this pointer
cout<<"\n Enter date of birth";
cin>>dob;
cout<<"\n Enter blood group";
cin>>blood;
cout<<"\n Enter height";
cin>>ht;
cout<<"\n Enter weight";
cin>>wt;
cout<<"\n Enter address";
cin>>p->address;
cout<<"\n Enter Licence number";
cin>>p->license;
cout<<"\n Enter Insurance policy number";
cin>>p->insurance;
cout<<"\n Enter Contact number";
cin>>p->contact;
count++;
}
//inline function
void person::display()
{
cout<<"\t\t\t\t"<<name;
cout<<"\t"<<dob;
cout<<"\t"<<blood;
cout<<"\t"<<ht;
cout<<"\t"<<wt;
cout<<"\t"<<p->address;
cout<<"\t"<<p->license;
cout<<"\t"<<p->insurance;
cout<<"\t"<<p->contact;
}
//static member
int person::count;
int main()
{
person *p1,*p2;
int ch;
p1=new person; // default constructor
p2=new person(p1); //copy constructor
cout<<"\t\t\t\tName";
cout<<"\tDob";
cout<<"\t Blood";
cout<<"\tHt";
cout<<"\tWt";
cout<<"\tAddress";
cout<<"\tLicense";
cout<<"\tInsurance";
cout<<"\tContact";
cout<<endl;
cout<<"Default Constructor Value= \n";
p1->display();
cout<<"\n";
cout<<"Copy Constructor Value= \n";
p2->display();
int n;
cout<<"\nEnter how many records you want??";
cin>>n;
person p3[n];
char name[20];
int x=0;
do
{
cout<<"\nWelcome to Personal database system";
cout<<"\n1.Enter the record";
cout<<"\n2.Display the record";
cout<<"\n3.Exit";
cin>>ch;
switch(ch)
{
case 1:
{
cout<<"\nEnter the Name ";
cin>>name;
p3[x].getdata(name);
person::showcount();
x++;
break;
}
case 2:
{
cout<<"\tName";
cout<<"\tDob";
cout<<"\t Blood";
cout<<"\tHt";
cout<<"\tWt";
cout<<"\tAddress";
cout<<"\tLicense";
cout<<"\tInsurance";
cout<<"\tContact";
for(int i=0;i<n;i++)
{
cout<<"\n";
p3[i].display();
}
break;
}
}
}while(ch!=3);
delete p1;
delete p2;
return 0;
}
