#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    string a;
    string b;
    cout << "Enter first string: ";
    getline(cin,a);
    cout << "Enter second string: ";
    getline(cin,b);
      
    
    cout << "On comparing String 1 and String 2, we get: " << a.compare(b) << endl;
    
     
    return 0;
}
