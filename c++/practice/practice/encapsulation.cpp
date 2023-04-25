#include<iostream>
using namespace std;
class capsule
{
    int id;
    string name;
public:

    int get()
    {
        cout<<"Enter your name : ";
        cin>>name;
        cout<<"Enter your id : ";
        cin>>id;
        return 0;

    };
    int show()
    {
        cout<<name<<" Your id is : "<<id;
        return 0;

    };
};
int main()
{
    capsule a;
    a.get();
    a.show();
    return 0;
}