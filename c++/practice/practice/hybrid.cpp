#include<iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<<"this is class a.";
    }
};
class B : public virtual A
{
public:
    B()
    {
        cout<<"\nthis is class b.";
    }
};
class C : public virtual A
{
public:
    C()
    {
        cout<<"\nthis is class c.";
    }
};
class D : public B , public C
{
public:
    D()
    {
        cout<<"\nthis is class d.";
    }
};
int main()
{
    D d1;
    return 0;
}
