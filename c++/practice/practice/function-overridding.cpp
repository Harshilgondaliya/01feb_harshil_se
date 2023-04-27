#include<iostream>
using namespace std;
class Poly
{
public:
    int sub(int a,int b)
    {
        cout<<"subtraction of a and b is : "<<a - b<<endl;
        return 0;

    };
};
class Phism
{
public:
    int sub(int a,int b)
    {
        cout<<"\nsubtraction of a and b is : "<<a - b;
        return 0;

    };
};
int main()
{
    Poly p1;
    Phism p2;
    p1.sub(22,2);
    p1.sub(23,3);
    return 0;
}