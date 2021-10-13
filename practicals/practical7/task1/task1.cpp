#include<iostream>
using namespace std;
/*1.print time day month year mannually
  2.print the same using inbuilt functions*/
int main()
{
  int ch;
  do{
  cout<<"1.day\n2.date\n3.month\n4.year5.exit\n";
  cout<<"enter your choice :\n";
  cin>>ch; 
  switch(ch)
  {
    case 1:
      cout<<"wednesday\n";
      break;
    case 2:
      cout<<"13\n";
      break;
    case 3:
      cout<<"october\n";
      break;
    case 4:
      cout<<"2021\n";
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
