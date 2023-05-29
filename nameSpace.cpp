#include <bits/stdc++.h>
using namespace std;

namespace Rakib
{
    int age = 24;
    void hello()
    {
        cout << "Hello from Rakib" << endl;
    }
}
namespace Sakib
{
    int age2 = 25;
    void hello2()
    {
        cout << "Hello from Sakib" << endl;
    }
}

using namespace Rakib;
int main()
{
    // cout<<Rakib::age<<endl;
    // cout<<Sakib::age2<<endl;
    cout << age2 << endl;
    hello();
    Sakib::hello2();
    return 0;
}