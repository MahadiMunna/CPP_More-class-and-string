#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
};

int main(){
    Person * munna = new Person("Mahadi Munna",25);
    Person * sakib=new Person("Sakib Hasan",23);
    // munna = sakib;//its just point address, if value get delete then address beacame null
    *munna = *sakib;//copy all together  
    // munna->name=sakib->name;//copy way single property to property
    // munna->age=sakib->age;
    delete sakib;
    cout<<munna->name<<" "<<munna->age<<endl;
    return 0;
}