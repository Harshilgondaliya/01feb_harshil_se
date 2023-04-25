#include<iostream>
using namespace std;
class Abstract
{
    int id;
public:
    int get()
    {
        cout<<"Enter your id : ";
        cin>>id;
        return 0;
    
    };
    int show()
    {
        cout<<"Your id is : "<<id;
        return 0;

    };
};
int main()
{
    Abstract a;
    a.get();
    a.show();
    return 0;
}