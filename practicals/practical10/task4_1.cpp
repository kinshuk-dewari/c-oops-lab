#include<iostream>
using namespace std;
class overload
{
    private:
        int a,b;
    public:
        overload(int a, int b)
        {
            this->a = a;
            this->b = b;
        }
        friend bool operator<(overload &s,overload &s2);
};
bool operator<(overload &s,overload &s2)
{
    if(s.a<s2.a)
    {
        return true;
    }
    if(s.a==s2.a && s.b < s2.a)
    {
        return true;
    }
    return false;
}
int main()
{
    int a,b;
    cout<<"Enter the value of a and b  :"<<endl;
    cin>>a>>b;
    overload a1(a,b),a2(a+1,b+1);
    
    if(a1<a2)
    {
        cout<<b<<" is bigger"<<endl;
    }
    else if (a2<a1)
    {
        cout<<a<<" is bigger"<<endl;
    }
    return 0;
}
