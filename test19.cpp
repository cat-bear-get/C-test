//
// Created by jingwei on 2021/8/17.
//

#include <iostream>

using namespace std;
//默认情况下，C++编译器至少给一个类添加3个函数
//1、默认构造函数（无参，函数体为空）
//2、默认析构函数（无参，函数体为空）
//3、默认拷贝函数，对属性进行值的拷贝

//构造函数调用规则如下：
//如果用户定义有参构造函数，C++不再提供默认无参构造，但是会提供默认拷贝构造
//如果用户自定义拷贝构造函数，C++不会再提供其它构造函数

class Person {
public:
    int age;

    Person() {
        cout << "Person无参构造函数！" << endl;
    }

    Person(int a) {
        age = a;
        cout << "Person有参构造函数！" << endl;
    }

    Person(const Person &p) {
        cout << "Person拷贝构造函数！" << endl;
        age = p.age;
    }

    ~Person() {
        cout << "析构函数调用" << endl;
    }
};

void test01() {
    Person p;
    p.age = 18;
    Person p1 = p;
    cout << "p1的年龄为：" << p1.age << endl;
}

int main() {
    test01();
}