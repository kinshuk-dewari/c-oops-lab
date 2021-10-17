#include<ctime>
#include<iostream>
using namespace std;
int main()
{
  time_t=time(NULL);
  tm* timePtr = localtime(&t);
  cout<<"Day = "<<timePtr->tm_mday<<endl;
  cout<<"Month = "<<timePtr->tm_mon<<endl;
  cout<<"Year = "<<timePtr->tm_year<<endl;
  cout<<"Day of year = "<<timePtr->tm_yday<<endl;
}
