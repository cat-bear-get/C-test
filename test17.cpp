//
// Created by jingwei on 2021/8/16.
//

#include <iostream>

using namespace std;

//构造函数的分类及调用
//两种分类方式：
//按参数分为：有参构造和无参构造
//按类型分为：普通构造和拷贝构造
//三种调用方式：
//括号法
//显示法
//隐式转换法

class Person {
public:
    int age;

    //无参构造函数
    Person() {
        cout << "无参构造函数" << endl;
    }

    //有参构造函数
    Person(int a) {
        age = a;
        cout << "有参构造函数" << endl;
    }

    //拷贝构造函数
    Person(const Person &p) {       //加const防止修改本体数据
        cout << "拷贝构造函数" << endl;
        age = p.age;
    }

    ~Person() {
        cout << "析构函数调用" << endl;
    }
};

void test() {
    //括号法
    Person p;
    Person p1(10);
    Person p2(p1);
    cout << p1.age << endl;
    cout << p2.age << endl;
    //注意事项：调用默认构造函数时后面不要加（）

    //显示法
    Person q;
    Person q1 = Person(10);
    Person q2 = Person(p1);
    //Person(10);     //匿名对象  特点：当前执行完当前行后立即释放
    cout << q1.age << endl;
    cout << q2.age << endl;
    //注意事项：不要利用拷贝构造函数初始化匿名对象，编译器会认为在声明对象

    //隐式转换法
    Person r = 10;//相当于写了Person r = Person （10）
    Person r1 = r;//相当于写了Person r1 = Person(r);
}

int main() {
    test();
}