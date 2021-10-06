#include<bits/stdc++.h>
using namespace std;
int main(){
string str,str2;
cout<<"enter a string :\n";
  getline(cin,str);
  string :: iterator i;
  for(i=str.end();i>=str.begin();i--){
    str2 += *i;  
  }
  cout<<str2<<"\n";
  cout<<str;
  if (str2==str)
    cout<<"\npallindrome\n";
  else
    cout<<"not a pallindrome\n"; 
  return 0;
}
