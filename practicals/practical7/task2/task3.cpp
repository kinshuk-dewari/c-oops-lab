//problem : only works if m = even, if m = odd mid row doesn't swap//
#include<iostream>
using namespace std;
int main()
{
  int m;
  cout<<"enter the rows : \n";
  cin>>m;
//  int x = m%2==0?m-1:m-2;
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
  for (int i=0;i<m/2;i++)
  {
      if (x>=0)
      {
      int y=m-1;
      for (int j=0;j<m;j++)
      {
          
          int temp=a[i][j];
          a[i][j]=a[x][y];
          a[x][y]=temp;
          y--;
      }
      x--;
      }
      else
        break;
  }
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<m;j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
 
}
  
