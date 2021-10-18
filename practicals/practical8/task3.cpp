#include<stdio.h>
using namespace std;
int main()
{
	int a[]={10,20,30};
	int *p=a;
cout<<p;
	int **q=*p;
cout<<q;
}
