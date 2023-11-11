#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "Animal eating";
    }
};
class Cat : public Animal
{
    void voice()
    {
        cout << "Meow Meow";
    }
};
class Dog : public Animal
{
    void bark()
    {
        cout << "Dog is Barking";
    }
};
int main()
{
    cat c;
    c.voice();
    dog d;
    d.bark();
    c.eat();
    d.eat();
    return 0;
}
