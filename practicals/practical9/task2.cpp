#include<iostream>
using namespace std;
class area
{
	public:
		void display(int l,int b)
		{
			cout<<"Area of the Rectangel is = "<<l*b<<" m sq."<<endl;
		}
		void display(int s)
		{
			cout<<"Area of the Square is = "<<s*s<<" m sq"<<endl;
		}
};
int main()
{
	int ch;
	cout<<"1. to find the area of Rectangle"<<endl<<"2. to area of the Square"<<endl;
	cout<<"Enter your choice:";
	cin>>ch;
	area ob;
	switch(ch)
	{
		case 1:
			int l,b;
			cout<<"Enter  length of the rectangle :";
			cin>>l;
			cout<<"Enter  breadth of the rectangle :";
			cin>>b;
			ob.display(l,b);
			break;
		case 2:
			int s;
			cout<<"Enter  side of the square :";
			cin>>s;
			ob.display(s);
			break;
		default :
			cout<<" Wrong Choice :"<<endl;
	}
	return 0;
}
