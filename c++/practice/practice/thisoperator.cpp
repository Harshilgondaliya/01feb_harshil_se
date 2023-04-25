#include<iostream>
using namespace std;
class This
{
public:
    int no = 50;
    int data()
    {
        int no = 10;
        cout<<"value of local variable number is : "<<no;
        cout<<"\nvalue of data member number is : "<<this->no;
        return 0;
    }
};
int main()
    {
        This a;
        a.data();
        return 0;
    }