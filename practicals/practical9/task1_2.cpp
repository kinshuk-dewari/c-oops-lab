#include<iostream>
#include<string>
using namespace std;
class student
{
    public:
	    string name;
	    int age;
	    int year;
	    char section;
};
int main()
{
	int n;
	cout<<"Enter the number of students in the class :";
	cin>>n;
	student s[n];
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
		cout<<"Enter the student's name : "<<(i+1)<<" :";
		getline(cin,s[i].name);
		cout<<"Enter the student's age :";
		cin>>s[i].age;
		cout<<"Enter the student's year of admission :";
		cin>>s[i].year;
		cout<<"Enter the section of the student :";
		cin>>s[i].section;
	}
	cout<<endl;
  cout<<"The details of the students are :"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Student - "<<(i+1)<<endl;
		cout<<"Name - "<<s[i].name<<endl;
		cout<<"Age - "<<s[i].age<<endl;
		cout<<"Year of admission - "<<s[i].year<<endl;
		cout<<"Section - "<<s[i].section<<endl;
		cout<<endl;
	}
	return 0;
}
