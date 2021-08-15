//
// Created by jingwei on 2021/8/15.
//

#include <iostream>

using namespace std;

//创建一个学生的类
class Student {
public: //公共权限

    //类中的属性和行为 统一称为 成员
    //属性     成员属性       成员变量
    //行为     成员函数       成员方法


    //属性
    string name;
    int number;

    //行为
    void showID() {
        cout << "姓名:" << name << endl << "学号:" << number << endl;
    }

    //设置名字
    void set_name(string Name) {
        name = Name;
    }

    //设置学号
    void set_number(int Number) {
        number = Number;
    }
};

int main() {
    Student S1;
    S1.set_name("张三");
    S1.set_number(1110);
    S1.showID();
}