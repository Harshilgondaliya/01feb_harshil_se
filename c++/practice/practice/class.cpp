#include<iostream>
using namespace std;
class stdata
{
    // data member
    int id;
    string nm;
    // member function
public:
    int show()
{
    cout<<"enter your id :";
    cin>>id;
    cout<<"enter your name :";
    cin>>nm;
    return 0;
}  
    int print()
    {
        cout<<nm<<" your id is : "<<id;
        return 0;
    };
};
int main()
{
    stdata st;
    st.show();
    st.print();
    return 0;

}
