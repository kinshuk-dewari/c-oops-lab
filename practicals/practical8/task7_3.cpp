#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}
int main()
{
	int a,b;
	cout<<"Enter the value for a :";
	cin>>a;
	cout<<"Enter the value for b :";
	cin>>b;
	cout<<"Values after swap :"<<endl;
	swap(&a,&b);
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	return 0;
}
