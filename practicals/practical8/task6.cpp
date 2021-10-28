#include<iostream>
#include<cmath>
using namespace std;
int series(int n)
{
    if(n==2)
    {
        cout<<n<<" , ";
        return pow(n,n)+n;
    }
    else
    {
        cout<<series(n-1)<<" , ";
    }
    return pow(n,n)+n;
}
int main()
{
    int n;
    cout<<"Enter the limit : ";
    cin>>n;
    series(n+1);
    cout<<endl;
    return 0;
}
