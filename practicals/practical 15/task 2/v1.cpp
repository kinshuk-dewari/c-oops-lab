/*
	program to read from the file character by character using fstream
*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream read;
	char s;
	read.open("file.txt");
	cout<<"Characters from the file are : "<<endl;
	while(read>>s)
	{
		cout<<s<<" ";
	}
	cout<<endl;
	read.close();
}
