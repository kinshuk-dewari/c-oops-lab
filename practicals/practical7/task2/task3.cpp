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
/*#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << "Enter the order of the matrix : ";
	cin >> N;
	
	int arr[N][N];
	cout << "Enter the elements : " << endl;
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
			cin >> arr[i][j];
	}
	
	int res = N % 2 == 0 ? N/2 - 1: N/2;    
	for(int i = 0; i <= res; i++)
	{
	for(int j = 0; j < N; j++)
	{    
	    if (i == N-1-i && j == N-1-j)
		break;
	    int t = arr[i][j];
	    arr[i][j] = arr[N-1-i][N-1-j];
	    arr[N-1-i][N-1-j] = t;
	}
	}
	
	cout << "\nArray after reverse : " << endl;
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}       
	return 0;
} */
  
