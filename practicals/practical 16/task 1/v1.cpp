/*
	program to create a generic function to add two integers numbers and return integer number
*/
#include<iostream>
using namespace std;
template <typename A>
A add(A a,A b)
{
    return (a+b);

}
int main()
{
    int x=60,y=9;
    cout<<"The Integer Addition is "<<add(x,y)<<endl;
    return 0;
}
