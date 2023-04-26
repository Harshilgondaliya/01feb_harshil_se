#include<iostream>
using namespace std;
class A
{
public:
    void a()
    {
        cout<<"this is grand parent class.";

    }
};
class B : public A
{
public:
    void b()
    {
        cout<<"\nthis is parent class.";

    }
};
class C : public B
{
public:
    void c()
    {
        cout<<"\nthis is child class.";

    }
};
int main()
{
    C a1;
    a1.a();
    a1.b();
    a1.c();
    return 0;
}