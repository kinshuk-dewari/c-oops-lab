/*print 2 d array
1.pritnt value only 
2.print using -10
3.same as 1 but restore in array
4.same as 2 but restore in array */
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
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<m;j++)
    {
      cout<<10-a[i][j]<<" ";
    }
    cout<<endl;
  }
}
  
