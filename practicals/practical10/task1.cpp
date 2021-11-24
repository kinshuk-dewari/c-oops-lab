#include<iostream>
#include<string>
using namespace std;
class Directory
{
	private:
		string name,address,telephone_number,mobile_number,head_of_family;
	public:
		void setname(Directory &s)
		{
			getline(cin,s.name);
		}
		void setaddress(Directory &s)
		{
			getline(cin,s.address);
		}
		void settelephone_number(Directory &s)
		{
			getline(cin,s.telephone_number);
		}
		void setmobile_number(Directory &s)
		{
			getline(cin,s.mobile_number);
		}
		void sethead_of_family(Directory &s)
		{
			getline(cin,s.head_of_family);
		}

		string getname(Directory &s)
		{
			return s.name;
		}
		string getaddress(Directory &s)
		{
			return s.address;
		}
		string gettelephone_number(Directory &s)
		{
			return s.telephone_number;
		}
	 	string getmobile_number(Directory &s)
		{
			return s.mobile_number;
		}
		string gethead_of_family(Directory &s)
		{
			return s.head_of_family;
		}

};
int main()
{
	int n,i;
	cout<<"The directory contains "<<endl<<"1-Name of a person"<<endl<<"2-Address"<<endl<<"3-Telephone Number"<<endl<<"4-Mobile Number"<<endl<<"5-Head of the family"<<endl;
	cout<<"Enter the number of contacts you want to save in the directory :";
	cin>>n;
	Directory s[n];
	cout<<endl;
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		cout<<"Enter the name of contact "<<i+1<<" :";
		s[i].setname(s[i]);
		fflush(stdin);
		cout<<"Enter the Address of contact "<<i+1<<" :";
		s[i].setaddress(s[i]);
		fflush(stdin);
		cout<<"Enter the telephone number with STD code of contact "<<i+1<<" :";
		s[i].settelephone_number(s[i]);
		fflush(stdin);
		cout<<"Enter the Mobile number of the contact "<<i+1<<" :";
		s[i].setmobile_number(s[i]);
		fflush(stdin);
		cout<<"Enter the name of head of the family of contact "<<i+1<<" :";
		s[i].sethead_of_family(s[i]);
	}
	cout<<endl;
	cout<<"the saved contacts in the directory are :"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Name of contact "<<i+1<<" : "<<s[i].getname(s[i])<<endl;
		cout<<"Address of contact "<<i+1<<" : "<<s[i].getaddress(s[i])<<endl;
		cout<<"Telephone number with STD code of contact "<<i+1<<" : "<<s[i].gettelephone_number(s[i])<<endl;
		cout<<"Mobile number of the contact "<<i+1<<" : "<<s[i].getmobile_number(s[i])<<endl;
		cout<<"Name of head of the family of contact "<<i+1<<" : "<<s[i].gethead_of_family(s[i])<<endl;
		cout<<endl;
	}
	cout<<endl;
	return 0;
}
