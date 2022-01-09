/*
	program to use IO manipulators
	Iomanip:setW,setPrecision
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a=100.6969;
	cout<<setw(10)<<setprecision(4)<<fixed<<a<<endl;
	return 0;
}
