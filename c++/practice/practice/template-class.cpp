#include<iostream>
using namespace std;
template <typename T>
class Template
{
public:
    Template(T a,T b)
    {
        cout<<"division of a and b is : "<<a/b<<endl;
        
    };
};
int main()
{
    Template <float> temp1(5 , 2);
    Template <int> temp2(6 , 2);
    return 0;
}