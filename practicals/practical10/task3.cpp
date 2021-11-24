#include<iostream>
using namespace std;
class calc
{
    private:
        int a,b,rem;
    public:
        calc(int a,int b)
        {
            this->a=a;
            this->b=b;
            this->rem=a%b;
        }
        int getrem(calc s)
        {
            return s.rem;
        }
};
int main()
{
    int a,b;
    cout<<"Enter two numbers for finding out their remainder :"<<endl;
    cout<<"Enter the first no. :";
    cin>>a;
    cout<<"Enter the second no. :";
    cin>>b;
    calc s(a,b);
    cout<<"Remainder of "<<a<<"/"<<b<<" = "<<s.getrem(s)<<endl;
    return 0;
}
