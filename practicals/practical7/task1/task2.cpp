#include<iostream>
#include<ctime>
using namespace std;
int main()
{
  int ch;
  time_t now =time(0);
  tm *ltm = localtime(&now);
  char* dt = ctime(&now);
  do{
  cout<<"1.day\n2.date\n3.month\n4.year5.exit\n";
  cout<<"enter your choice :\n";
  cin>>ch; 
  switch(ch)
  {
    case 1:
      cout<<"Day : ",1 + ltm->tm_mon<< endl;
      break;
    case 2:
      cout<<"Date : 13\n",dt<<endl;
      break;
    case 3:
      cout<<"Month : ",1 + ltm->tm_mon<< endl;
      break;
    case 4:
      cout<<"Year :",1900 + ltm->tm_year<<endl;
      break;
    case 5:
      break;
    default:
      cout<<"wrong choice\n";
      break;
  }
  }while(ch!=5)
  return 0;
}
