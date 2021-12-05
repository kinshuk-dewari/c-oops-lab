#include<iostream>
#include<cmath>
using namespace std;
void prime(int num)
{
  int i=0,ctr=1;
  for(i=2;i<=sqrt(num);i++)
  {
    if(num%i==0)
    {
      ctr=0;
      break;
    }
  }
if(ctr==0)
  cout<<"not Prime";}
else
  cout<<" prime";
}
int main()
{
  int ctr=1,i,num,s;
  cout<<"enter the number : \n";
  cin>> num;
  prime(num);
  return 0;
}
