#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str;
    ofstream out;
    out.open("D:/new/hello.txt");
    out<<"harshil ";
    out.close();
    ifstream in("D:/new/hello.txt");
    in>>str;
    cout<<str;
    return 0;
}