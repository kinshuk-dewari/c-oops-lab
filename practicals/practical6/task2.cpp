#include<bits/stdc++.h>
using namespace std;
void clear(void){
while(getchar()!="\n");
}
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
  clear();
  if (str2==str)
    cout<<"\npallindrome\n";
  else
    cout<<"not a pallindrome\n"; 
  return 0;
}
