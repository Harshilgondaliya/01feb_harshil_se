#include<iostream>
using namespace std;
template <class T>
T data(T a,T b)
{
    return a+b;
}
int main()
{
    cout<<data <int> (6,2);
    cout<<endl<<data <float> (5,2.5);
    return 0;
}