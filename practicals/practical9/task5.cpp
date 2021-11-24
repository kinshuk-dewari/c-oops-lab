#include<iostream>
using namespace std;
class College
{	
	private:
		string name;
		int roll;
		int marks;
	public:
		void setname(College &s)
		{
			fflush(stdin);
			getline(cin,s.name);
		}
		void setroll(College &s)
		{
			cin>>s.roll;
		}
		void setmarks(College &s)
		{
			cin>>s.marks;
		}
		string getname(College &s)
		{
			return s.name;
		}
		int getroll(College &s)
		{
			return s.roll;
		}
		int getmarks(College &s)
		{
			return s.marks;
		}
	 
};
struct student
{
    string name;
    int roll;
    float marks;
};
int main()
{
	int n,i;
	cout<<"Enter the total number of student :";
	cin>>n;
	College s[n];
	student S[n];
	cout<<"Enter the details of "<<n<<" students in oops c++ class College :"<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<"Enter the name of Student "<<i<<" :";
		s[i].setname(s[i]);
		cout<<"Enter the Roll no. of Student "<<i<<" :";
		s[i].setroll(s[i]);
		cout<<"Enter the marks of Student "<<i<<" :";
		s[i].setmarks(s[i]);
		cout<<endl;
	}
	cout<<endl;
	cout<<"Enter the details of "<<n<<" students in oops c++ structure student :"<<endl;
	for(i=1;i<=n;i++)
	{
		fflush(stdin);
		cout<<"Enter the name of Student "<<i<<" :";
		getline(cin,S[i].name);
		cout<<"Enter the Roll no. of Student "<<i<<" :";
		cin>>S[i].roll;
		cout<<"Enter the marks of Student "<<i<<" :";
		cin>>S[i].marks;
		cout<<endl;
	}
	cout<<endl;
	cout<<"The details of "<<n<<" Students by c++ class College are :"<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<"Name of Student "<<i<<" is : "<<s[i].getname(s[i])<<endl;
		cout<<"Roll no. of Student "<<i<<" is : "<<s[i].getroll(s[i])<<endl;
		cout<<"Marks of Student "<<i<<" is : "<<s[i].getmarks(s[i])<<endl;
		cout<<endl;
	}
	cout<<endl;
	cout<<"The details of "<<n<<" Students by c++ structure student are :"<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<"Name of Student "<<i<<" is : "<<S[i].name<<endl;
		cout<<"Roll no. of Student "<<i<<" is : "<<S[i].roll<<endl;
		cout<<"Marks of Student "<<i<<" is : "<<S[i].marks<<endl;
		cout<<endl;
	}
	cout<<endl;
	return 0;
}
