#include<bits/stdc++>
using namespace std;
int main(){
string str,str2;
cout<<"enter a string :\n";
  getline(cin,str);
  for(int i=str.end();i!=str.begin();i--){
    str2+=*i;  
  }
  if (str==str2)
    cout<<"pallindrome\n";
  else
    cout<<"not a pallindrome\n";
  return 0;
}
