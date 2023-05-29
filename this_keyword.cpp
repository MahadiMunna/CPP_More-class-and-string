#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;
    Person(string name, int age){
        this->name=name;//this actually pointing the objects property
        this->age=age;
    }
    void hello(){
        cout<<"Hello"<<endl;
    }
};

int main(){
    Person munna("Mahadi Munna",24);
    cout<<munna.name<<endl;
    return 0;
}