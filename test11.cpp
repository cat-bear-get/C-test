//
// Created by jingwei on 2021/8/15.
//

#include <iostream>

using namespace std;

class Person {
public:
    string Name;
protected:
    string Car;
private:
    int Password;
public:
    void func() {
        Name = "张三";
        Car = "三轮车";
        Password = 1110;
    }
};

int main() {
    //访问权限
    //三种：1、公共权限 public 成员 类类可以访问，类外可以访问
    //     2、保护权限 protected 成员 类内可以访问 类外不可以访问
    //     3、私有权限 private 成员 类内可以访问 类外不可以访问
    Person p1;
    p1.Name = "李四";
}