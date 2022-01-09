/*
	What will be the output of this program and why?
*/
#include <iostream> 
using namespace std;
int main() 
{
    try 
    {
        throw 'a';
    }
    catch(int x) 
    {
        cout<<"Caught "<<x;
    }
    catch(...) 
    {
        cout<<"this is a Default Exception\n";
    }
    return 0;
}
