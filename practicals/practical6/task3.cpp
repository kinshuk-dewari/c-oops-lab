#include<bits/stdc++>
using namespace std;
int main(){
string s;
cout<<"enter a string :\n";
getline(cin,s);
string :: iterator i;
for( i=s.end();i>=s.begin();i++){
cout<<*i;} 
}
