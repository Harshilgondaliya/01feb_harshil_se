#include<iostream>
using namespace std;
class A
{
public:
    int a()
    {
        cout<<"this is class A.";
        return 0;
    }
};
class B
{
public:
    int b()
    {
        cout<<"\nthis is class B.";
        return 0;
    }
};
class child : public A,public B
{
public:
    int c()
    {
        cout<<"\nthis is child class";
        return 0;
    }
};
int main()
{
    child c1;
    c1.a();
    c1.b();
    c1.c();
    return 0;
}