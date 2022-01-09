#include <iostream>
using namespace std;
class B
{
    public:
        int k;
        void displayB()
        {
            cout<<"k in B= "<<k<<endl;
        }
};
class C
{
    public:
        int k;
        void displayC()
        {
            cout<<"k in C = "<<k<<endl;
        }
};
class D:public B,public C
{
    public:
        void displayD()
        {
            cout<<"k from B and C are inherited in D => "<<B::k<<" "<<C::k<<endl;
        }
};
int main()
{
    D obj;
    obj.B::k=69;
    obj.C::k=96;
    obj.displayD();
    return 0;
}
