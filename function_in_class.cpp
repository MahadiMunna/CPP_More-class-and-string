#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string nm, int a)
    {
        name = nm;
        age = a;
    }
    void hello()
    {
        cout << name << endl;
    }
};

int main()
{
    Person munna("Mahadi Munna", 24);
    munna.hello();
    return 0;
}