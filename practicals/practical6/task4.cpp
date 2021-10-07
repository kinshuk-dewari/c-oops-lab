#include<bits/stdc++.h>
using namespace std;
int main(){
string s1,s2;
cout<<"enter the first string  :";
getline(cin,s1);
cout<<"enter the second string :";
getline(cin,s2);
if (s1.length()!=s2.length())
	cout<<"string not equal\n";
else
	
	for(int i=0 ;i<s1.length();i++){
		if (s1[i]!=s2[i])
		cout<<"string not equal";
		break;
		}	
	return 0;
}
