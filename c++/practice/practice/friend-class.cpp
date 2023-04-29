#include<iostream>
using namespace std;
class Friend
{
    int a;
public:
    friend class temp;
};
class temp
{
public:
    void data(Friend&obj)
    {
        cout<<"enter the value of a : ";
        cin>>obj.a;
        cout<<"\nvalue of the a is : "<<obj.a;

    }
};
int main()
{
    Friend f1;
    temp t1;
    t1.data(f1);
    return 0;
}
