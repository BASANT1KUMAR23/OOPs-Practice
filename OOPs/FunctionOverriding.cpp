#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    void person()
    {
        cout << "Good Morning";
    }
};
class B : public A
{
public:
    void person()
    {
        cout << "Good Night";
    }
};
int main()
{
    B obj;
    obj.person();
    return 0;
}
