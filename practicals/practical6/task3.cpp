#include <iostream>
using namespace std;

int main()
{
	string str= "",str2 = "";
	cout<<"enter a string : ";
	getline(cin,str);
	
  	string :: iterator i;
	for(i=str.begin(); i<str.end(); i++)
    		str2 = *i + str2;  
  	 
  	 cout<< "the reverse of the string is \n"<<str2;
	return 0;
}
