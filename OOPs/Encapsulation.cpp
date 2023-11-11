#include <bits/stdc++.h>
using namespace std;
class thief
{
private:
    string name, address;
    int mobile;

public:
    void input()
    {
        name = "Manish";
        address = "Bihar";
        mobile = 1234567890;
    }
    void output()
    {
        cout << name << endl;
        cout << address << endl;
        cout << mobile;
    }
};
class police : public thief
{
};
int main()
{
    police p;
    p.input();
    p.output();
    return 0;
}
