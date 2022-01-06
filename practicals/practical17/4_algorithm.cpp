#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int main()
{
    int array[] = {28, 56, 775, 56, 56, 655, 446, 4464, 5778, 4523, 3, 987};
    int n = sizeof(array) / sizeof(array[0]);
    vector<int> v(array, array + n);

    cout << "The array is : ";
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";

    cout << "\n\nThe vector is : ";
    for (auto i = v.begin(); i != v.end(); i++)
        cout << *i << " ";

    reverse(v.begin(), v.end());
    cout << "\n\nThe vector after reversing  : ";
    for (auto i = v.begin(); i != v.end(); i++)
        cout << *i << " ";

    cout << "\n\nMaximum element of vector is : ";
    cout << *max_element(v.begin(), v.end());

    cout << "\n\nMinimum element of vector is : ";
    cout << *min_element(v.begin(), v.end());

    cout << "\n\nThe occurence of 56 in the vector is : " << count(v.begin(), v.end(), 56);

    sort(v.begin(), v.end());
    cout << "\n\nThe vector after sorting : ";
    for (auto i = v.begin(); i != v.end(); i++)
        cout << *i << " ";

    sort(array, array + n);
    cout << "\n\nThe sorted array is : ";
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << "\n\nSearching for 56 : ";
    binary_search(array, array + n, 56) ? cout << "Element found" : cout << "Element not found";
    cout << endl;
    return 0;
}
