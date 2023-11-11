#include <bits/stdc++.h>
using namespace std;
class Parent
{
public:
    Parent()
    {
        cout << "Parent class" << endl;
    }
};
class Child : public Parent
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
