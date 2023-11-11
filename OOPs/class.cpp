#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name,gender;
    int age;
    void output()
    {
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }
};
int main()
{
    student a;
    a.name = "Basant";
    a.age = 20;
    a.gender = "Male";
    a.output();
    return 0;
}