#include<iostream>
using namespace std;
void Bool()
{
	bool a=false;
	cout<<"Bool 			"<<a<<endl;
}
void Char()
{
	char a='A';
	cout<<"Char	  		"<<a<<endl;
}

void Short()
{
	short a=4;
	cout<<"Short 			"<<a<<endl;
}
void Int()
{
	int a=1900;
	cout<<"Int 			"<<a<<endl;
}
void Long()
{
	long a=934835;
	cout<<"Long	 		"<<a<<endl;
}
void widechar()
{
	wchar_t a=L'ロ';
	cout<<"Wide char	 	"<<a<<endl;
}

void Double()
{
	double a=69.69;
	cout<<"Double 			"<<a<<endl;
}
void long_double()
{
	long double a=980.8978787;
	cout<<"Long double	 	"<<a<<endl;
}
void Float()
{
	float a=69.69;
	cout<<"Float 			"<<a<<endl;
}
int main()
{
	cout<<"Size of  different Data types are :"<<endl;
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
