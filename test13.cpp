//
// Created by jingwei on 2021/8/15.
//

#include <iostream>

using namespace std;

//成员属性设置为私有
//优点1：将所有成员属性设置为私有，可以自己控制读写权限
//优点2：对于写权限我们可以检测数据的有效性

class Person {
private:
    string m_Name;
    int m_Age;
    string m_Lover;
public:
    //设置姓名
    void setName(string name) {
        m_Name = name;
    }

    //获取姓名
    string getName() {
        return m_Name;
    }

    //获取年龄
    int getAge() {
        //m_Age = 0;    //初始化年龄为0岁
        return m_Age;
    }

    //设置年龄
    void setAge() {
        int age;
        while (1) {
            cin >> age;
            if (age >= 0 && age <= 150) {
                m_Age = age;
                break;
            } else {
                cout << "you are too old!!!" << endl;
            }
        }
    }

    //设置爱人
    void setLover(string lover) {
        m_Lover = lover;
    }
};

int main() {
    Person p;
    p.setName("张三");
    cout << "name:" << p.getName() << endl;
    p.setAge();
    cout << "age:" << p.getAge() << endl;
    p.setLover("elf");


}