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

class Child : public Parent1,Parent2
{
public:
    Child()
    {
        cout << "Child Class" << endl;
    }
};
int main()
{
    Child c;
    return 0;
}
