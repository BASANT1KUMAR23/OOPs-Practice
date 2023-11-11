#include <bits/stdc++.h>
using namespace std;
class A
{
    int num1, num2, sum, multi;

public:
    void person()
    {
        cout << "Enter Two Number : ";
        cin >> num1 >> num2;
        sum = num1 + num2;
        cout << "Addition : " << sum << endl;
    }
    void person(int a, int b)
    {
        multi = a * b;
        cout << "Multiple : " << multi << endl;
    }
};
int main()
{
    A obj;
    obj.person();
    obj.person(10, 20);
    return 0;
}
