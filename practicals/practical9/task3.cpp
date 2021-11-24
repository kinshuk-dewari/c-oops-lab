#include<iostream>
using namespace std;
class Function
{
	public:
		void name()
		{
			static int i=0;
			i+=1;
			cout<<"count for object is : "<<a<<endl;
		}
};
int main()
{	
	Function a,b,c;
	cout<<"object 'a' ";
	a.name();
	cout<<"object 'b' ";
	b.name();
	cout<<"object 'c' ";
	c.name();
	return 0;
}
