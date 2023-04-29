#include<iostream>
using namespace std;
class Poly
{
public:
    // same name but different parameter 
    int add(int a,int b)
    {
        cout<<"addition of two value is : "<<a+b;
        return 0;
    }
    int add(int a,int b,int c)
    {
        cout<<"\naddition of three value is : "<<a+b+c;
        return 0;
    }
};
int main()
{
    Poly obj;
    obj.add(25,5);
    obj.add(25,10,5);
    return 0;
}