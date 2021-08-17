//
// Created by jingwei on 2021/8/17.
//

#include <iostream>
#include <string>

using namespace std;

class Phone {
public:
    string type;

    Phone(string P_name) {
        type = P_name;
    }
};

class Person {
public:
    string name;
    Phone m_phone;

    Person(string a, string b) : name(a), m_phone(b) {

    }
};

void test01() {
    Person P("张三", "HUAWEI");
    cout<<"name: "<<P.name<<endl<<"P_name: "<<P.m_phone.type<<endl;
}

int main() {
    test01();
}