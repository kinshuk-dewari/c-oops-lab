#include<iostream>
using namespace std;
int main()
{
  int m;
  cout<<"enter the rows : \n";
  cin>>m;
  int a[m][m];
  cout<<"enter the elements :\n";
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin>>a[i][j];
    }
  }
  cout<<"\nthe elements after reversing the array by subtracting 10 : \n";
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<m;j++)
    {
      cout<<10-a[i][j]<<" ";
    }
    cout<<endl;
  }
}
