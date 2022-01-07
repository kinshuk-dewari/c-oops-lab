#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

void printlist(list<int> g)
{
    list<int>::iterator i;
    for (i = g.begin(); i != g.end(); i++)
        cout << "    " << *i;
    cout << '\n';
}
int main()
{
    list<int> a;
    for (int i = 10; i > 0; i--)
    {
        a.push_back(i);
    }
    cout << "the list is   :";
    printlist(a);
    cout << "size of list  :    " << a.size() << endl;
    a.sort();
    cout << "sorted list   :";
    printlist(a);
    cout << "reverse list  :";
    a.reverse();
    printlist(a);
    
    

    return 0;
}
