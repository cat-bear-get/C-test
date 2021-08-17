//
// Created by jingwei on 2021/8/16.
//

#include <iostream>

using namespace std;

//拷贝构造函数的调用时机
//1、使用一个已经创建完毕的对象来初始化一个新的对象
//2、值传递的方式给函数的参数传值
//3、以值方式返回局部对象

class Person {
public:
    int mAge;

    Person() {
        cout << "无参构造函数！" << endl;
        mAge = 0;
    }

    Person(int age) {
        cout << "有参构造函数！" << endl;
        mAge = age;
    }

    Person(const Person &p) {
        cout << "拷贝构造函数！" << endl;
        mAge = p.mAge;
    }

    ~Person() {
        cout << "析构函数！" << endl;
    }
};

void test01() {
    Person p1(10);
    Person p2(p1);
}

void dowork1(Person p) {

}

void test02() {
    Person p;
    dowork1(p);
}

Person dowork2() {
    Person p3;
    return p3;
}

void test03() {
    Person p = dowork2();
}

int main() {
    test01();
    test02();
    test03();
}