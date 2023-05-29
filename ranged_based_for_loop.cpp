#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    // // normal loop
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }
    // shortcut loop
    for(char c:s){
        cout<<c<<endl;
    }
    return 0;
}