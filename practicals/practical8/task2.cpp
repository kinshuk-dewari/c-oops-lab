

#include <iostream>

using namespace std;

int main()
{
  // int a[]={10,20,30};
   int *p={10,20,30};
 //  p=a;
   cout<<*p<<endl;
   p++;
   cout<<(*p);
    return 0;
}

