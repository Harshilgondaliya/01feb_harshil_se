#include<iostream>
using namespace std;
int no = 50;
int main()
{
    int no = 10;
    cout<<"value of local variable is : "<<no;
    cout<<"\n value of global variable is :"<<::no;
    return 0;
}