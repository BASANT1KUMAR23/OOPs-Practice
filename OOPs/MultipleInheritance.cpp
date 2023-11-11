#include <bits/stdc++.h>
using namespace std;
class A
{
    int a,b,c;
public:
    void input()
    {
        cout << "Enter Two Number : ";
        cin >> a >> b;
    }
    void add()
    {
        c = a + b;
        cout << "Addition : " << c << endl;
    }
};
class B
{
    int a,b,c;
public:
    void sub()
    {
        c = a - b;
        cout << "substration : " << c << endl;
    }
};
class c : public A , public B
{
    int a,b,c;
public:
    void multi()
    {
        c = a * b;
        cout << "Multiple : " << c << endl;
    }
    void Div()
    {
        c = a / b;
        cout << "Division : " << c << endl;
    }
};
int main()
{
    c show;
    show.input();
    show.add();
    show.sub();
    show.multi();
    show.Div();

    return 0;
}
