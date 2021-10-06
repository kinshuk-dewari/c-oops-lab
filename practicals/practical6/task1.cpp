#include<bits/stdC++.h>//this library includes all the standard libraries.
using namespace std;
int main()
{
  int a,b;
  float c,d;
  string s1,s2;
  cout<<"enter two int numbers :\n";
  cin>>a>>b;
  cout<<"enter two float numbers :\n";
  cin>>c>>d;
  cout<<"enter 1 string :\n";
  getline(cin,s1);
  cout<<"enter 2 string :\n";
  getline(cin,s2);
  /* int + int
  float + float
  float + int 
  string + string 
  string + int */
  cout<<"int + int "<<(a+b)<<endl;
  cout<<"float + float"<<(c+d)<<endl;
  cout<<"float + int"<<(a+c)<<endl;
  cout<<"sring + string"<<(s1+s2)<<endl;
  cout"string + int "<<(a+s1)<<endl;
  return 0;
}
