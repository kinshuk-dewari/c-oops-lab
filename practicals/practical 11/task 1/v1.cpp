//call the parent class method in child class function without creating an object of parent class
#include<iostream>
using namespace std;
class parent
{
    protected:
        void display_parent()
        {
            cout<<"this is parent class." << endl;
        }
};
class child : public parent
{
    public:
        void display_child()
        {
            cout<<"this is child class," << endl;
            display_parent();
        }
};
int main()
{
    child a;
    a.display_child();
    return 0;
}