#include<iostream>
using namespace std;
class Friend
{
int no;
public:
    friend int data(Friend&frnd);
};
int data(Friend&frnd)
{
    cout<<"enter number : ";
    cin>>frnd.no;
    cout<<"\nvalue of number is : "<<frnd.no;
    return 0;

}
int main()
{
    Friend obj;
    data(obj);
    return 0;
}