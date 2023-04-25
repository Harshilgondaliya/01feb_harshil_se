#include<iostream>
using namespace std;
class Base
{
public:
    int no;
    Base()
    {
        cout<<"enter the value of number : ";
        cin>>no;

    }
};
class Derived : public Base
{
public:
    Derived()
    {
        cout<<"value of number is : "<<no;
    }
};
int main()
{
Derived a;
return 0;
}