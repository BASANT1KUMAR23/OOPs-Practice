#include <bits/stdc++.h>
using namespace std;
class DAD
{
protected:
    int amount;

public:
    void input()
    {
        amount = 12000;
    }
};
class son : public DAD
{
public:
    void show()
    {
        cout << amount;
    }
};
int main()
{
    son s;
    s.input();
    s.show();
    return 0;
}
