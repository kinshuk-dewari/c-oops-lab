#include<iostream>
#include<string>
using namespace std;
class student
{
	public:
		int rnum;
		long int pnum;
		string address;
};
int main()
{
	students Sam,John;
	cout<<"Enter roll number of Sam :";
	cin>>Sam.rnum;
	cout<<"Enter phone number of Sam :";
	cin>>Sam.pnum;
  
	fflush(stdin);
  
	cout<<"Enter address of Sam :";
	getline(cin,Sam.address);
	cout<<"Enter roll number of John:";
	cin>>John.rnum;
	cout<<"Enter phone number of John :";
	cin>>John.pnum;
  
	fflush(stdin);
  
	cout<<"Enter address of John :";
	getline(cin,John.address);
	cout<<"Name - Sam ,Roll number - "<<Sam.rnum<<" ,Phone number - "<<Sam.pnum<<" ,Address - "<<Sam.address<<endl;
	cout<<"Name - John ,Roll number - "<<John.rnum<<" ,Phone number - "<<John.pnum<<" ,Address - "<<John.address<<endl;
	return 0;
}
