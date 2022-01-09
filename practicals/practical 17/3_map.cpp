#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main()
{
    map<int, string> a;

    a.insert(pair<int, string>(1, "name"));
    a.insert(pair<int, string>(5, "kinshuk"));
    a.insert({2, "is"});
    a.insert({0, "my"});
    a.insert({10, "dewari"});

    map<int, string>::iterator i;
    cout << "Elements of the maps are :" << endl;
    cout << "keys\tvalue" << endl;
    for (i = a.begin(); i != a.end(); i++)
    {
        cout << i->first << "\t" << i->second << endl;
    }
    // cout<<if(a.find(5))cout<<i->first<<" "<<i->second;
    cout << "\nfinding the element with key 10 :" << endl;
    cout << "keys\tvalue" << endl;
    for (auto it = a.find(10); it != a.end(); it++)
    {
        cout << it->first << "\t" << it->second << "\n";
    }

    map<int, string> b(a.begin(), a.end());
    cout << "\n\nThe map after assigning the values from a to b :" << endl;
    cout << "keys\tvalues" << endl;
    for (auto j = b.begin(); j != b.end(); j++)
    {
        cout << j->first << "\t" << j->second << endl;
    }

    /*
    cout << "\n\nmap a after removal of key less than 2\n";
    a.erase(a.begin(), a.find(2));
    cout << "keys\tvalue" << endl;
    for (auto k = a.begin(); k != a.end(); k++)
    {
        cout << k->first << "\t" << k->second << endl;
    }
    */
    b.erase(5);
    cout << "\n\nAfter removing element with key 5 in b" << endl;
    cout << "keys\tvalue" << endl;
    for (auto j = b.begin(); j != b.end(); j++)
    {
        cout << j->first << "\t" << j->second << endl;
    }

    cout << "size of map a : " << a.size() << endl;
    if (a.empty())
        cout << "\nthe map is a empty\n";
    else
        cout << "\nthe map is a not empty" << endl;

    b.clear();
    cout << "\nthe map b after clear " << endl
         << "keys\tvalue" << endl;
    for (auto j = b.begin(); j != b.end(); j++)
    {
        cout << j->first << "\t" << j->second << endl;
    }
    cout << endl
         << endl;

    return 0;
}