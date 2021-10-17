#include<iostream>
using namespace std;
void Bool()
{
	bool a=true;
	cout<<"Bool 			"<<a<<endl;
}
void Char()
{
	char a='b';
	cout<<"Char	  		"<<a<<endl;
}

void Short()
{
	short a=6;
	cout<<"Short 			"<<a<<endl;
}
void Int()
{
	int a=19;
	cout<<"Int 			"<<a<<endl;
}
void Long()
{
	long a=134235;
	cout<<"Long	 		"<<a<<endl;
}
void widechar()
{
	wchar_t a=L'ロ';
	cout<<"Wide char	 	"<<a<<endl;
}

void Double()
{
	double a=15.99;
	cout<<"Double 			"<<a<<endl;
}
void long_double()
{
	long double a=56.89787;
	cout<<"Long double	 	"<<a<<endl;
}
void Float()
{
	float a=6.30;
	cout<<"Float 			"<<a<<endl;
}
int main()
{
	cout<<"Size of all data types in your computer is:"<<endl;
	cout<<endl;
	cout<<"Data Types		Values Stored in it"<<endl;
	cout<<endl;
  Int();
	Long();
	Char();
	Bool();
	Short();
  long_double();
	widechar();	
	Float();
	Double();	
	cout<<endl;
	return 0;
}
