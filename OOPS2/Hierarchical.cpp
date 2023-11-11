#include <bits/stdc++.h>
using namespace std;
class Parent1
{
public:
    Parent1()
    {
        cout << "Parent1 Class" << endl;
    }
};
class Parent2
{
public:
    Parent2()
    {
        cout << "Parent2 Class" << endl;
    }
};

class Child1:public Parent1{
    public:
    Child1(){
        cout<<"Child1 class"<<endl;
    }
};

class Child2 : public Parent1
{
public:
    Child2()
    {
        cout << "Child2 Class" << endl;
    }
};
int main()
{
    Child2 c;
    return 0;
}