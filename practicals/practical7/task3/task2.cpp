#include<iostream>
using namespace std;
int main()
{
  int m;
  cout<<"enter the rows : \n";
  cin>>m;
  int x=m-1;
  int a[m][m];
  cout<<"enter the elements :\n";
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin>>a[i][j];
    }
  }
  cout<<"\n\nthe array is :\n\n";

   for(int i=0;i<m;i++)
  {
    for(int j=0;j<m;j++)
    {
      cout<<i+1<<" ";
    }
     cout<<endl;
  }
    
}
