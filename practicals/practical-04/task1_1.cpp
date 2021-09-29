#include<iostream>
using namespace std;
namespace first{
int sum(int a,int b)
{
return (a+b);
}
}
namespace second{
float sum(float a,float b)
{
return (a+b);
}
}
int main()
{
cout<<"sum of integers :"<<first :: sum(10,10);
cout<<"\nsum of float :"<<second :: sum(5.2,5.5);
return 0;
}
