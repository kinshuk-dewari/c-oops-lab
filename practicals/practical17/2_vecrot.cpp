#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> a = {2, 4, 645, 543, 335, 66645, 33, 00};
    vector<int>::iterator i;
    cout << "The vector is : ";
    for (i = a.begin(); i != a.end(); i++)
    {
        cout << *i << " ";
    }
    cout << "\nSize of capacity : " << a.capacity() << endl;
    cout << "Max size : " << a.max_size() << endl;
    a.resize(5);
    cout << "The vector after resize of 5 is : ";
    for (i = a.begin(); i != a.end(); i++)
    {
        cout << *i << " ";
    }
    if (a.empty())
        cout << "\nthe vector is empty\n";
    else
        cout << "\nthe vector is not empty" << endl;
    
    

    return 0;
}
