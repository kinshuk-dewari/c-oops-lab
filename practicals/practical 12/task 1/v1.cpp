#include<iostream>
using namespace std;
class A{
    private:
        int a;   //inaccessible in child class
    public:
        int b;
    protected:
        int c;
};
class B:protected A{
    public:
        void display(){
            b=50;
            c=10;
            cout<<"b="<<b<<" c="<<c<<endl;
        }
};
int main(){
    B obj;
    obj.display();
    return 0;
}
