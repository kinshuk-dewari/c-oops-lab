#include <iostream>
using namespace std;
int factorial( int num)
{
    int i,fact=1; 
    for(i=1;i<=num;i++)
    {    
      fact=fact*i;    
    }   
    return fact;
}
int main()
{
  int n;
  cout<<"enter the number : \n";
  cin>>n;
  cout<<"the factorial : "<<factorial(n);
  return 0;
}
