#include<iostream>
using namespace std;
class overload
{
    private:
        int a;
    public:
        overload(int a)
        {
            this->a = a;
        }
        friend int operator+(overload &s,overload &s2);
};
int operator+(overload &s,overload &s2)
{
    return(s.a+s2.a);
}
int main()
{
    int a,b;
    cout<<"Enter the value of a and b :"<<endl;
    cin>>a>>b;
  
    overload a1(a),a2(b);
    
    cout<<"Sum = "<<a1+a2<<endl;
  
    return 0;
}
