#include <bits/stdc++.h>
using namespace std;
class mybank
{
private:
    int atmpin, balance;

public:
    string bname, IFSCcode;
    int accountNumber;
    void input()
    {
        atmpin = 12345;
        balance = 120;
        bname = "Paytm";
        IFSCcode = "paytm01234";
        accountNumber = 3456789;
    }
    void output()
    {
        cout << atmpin << endl;
        cout << balance << endl;
        cout << bname << endl;
        cout << IFSCcode << endl;
        cout << accountNumber;
    }
};
int main()
{
    mybank m;
    m.input();
    m.output();
    return 0;
}