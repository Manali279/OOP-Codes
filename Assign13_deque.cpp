
#include <iostream>
#include <deque>

using namespace std;

void showdq(deque <int>de)
{
    deque <int> :: iterator it;
    for (it =de.begin(); it != de.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main()
{
    deque <int>de;
    int ch,ele,d;
    cout<<"Dequeue implementation using STL="<<endl;
    do
    {
    cout<<"Enter your choice(1. Insert from front\n2.Insert from back\n3.Pop from front\n4.Pop from back\n5.Size of deque\n6.Display front\n7.Display back\n8.Display deque)="<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
    	cout<<"Enter the element to be inserted from front="<<endl;
    	cin>>ele;
    	de.push_front(ele);
    	break;
    case 2:
    	cout<<"Enter the element to be inserted from back="<<endl;
    	    	cin>>ele;
    	    	de.push_back(ele);
    	    	break;
    case 3:
    	cout<<"Pop from front="<<endl;
    	 de.pop_front();
    	    showdq(de);
    	    break;
    case 4:
    	cout<<"Pop from back="<<endl;
    	    	 de.pop_back();
    	    	    showdq(de);
    	    	    break;
    case 5:
    	cout<<"Size of deque="<<endl;
    	cout<<de.size()<<endl;
    	break;
    case 6:
    	cout<<"Front element="<<endl;
    	cout<<de.front()<<endl;;
    	break;
    case 7:
        	cout<<"Back element="<<endl;
        	cout<<de.back()<<endl;;
        	break;
    case 8:
    	cout<<"Deque="<<endl;
    	showdq(de);
    	break;
    default:
    	cout<<"Wrong choice!!!"<<endl;
    }
    	cout<<"Want to do another operation(1 for yes and 0 for no)="<<endl;
    	cin>>d;
    }while(d==1);



    return 0;
}

