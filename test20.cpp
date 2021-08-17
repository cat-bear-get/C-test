//
// Created by jingwei on 2021/8/17.
//

#include <iostream>

using namespace std;
//深拷贝与浅拷贝
//深浅拷贝是面试经典问题，也是常见的一个坑
//浅拷贝：简单的赋值拷贝操作
//深拷贝：在堆区重新申请空间，进行拷贝操作

class Person {
public:
    int m_age, *m_height;

    Person() {
        cout << "无参构造函数！" << endl;
    }

    Person(int age, int height) {
        cout << "有参构造函数！" << endl;
        m_age = age;
        m_height = new int(height);
    }

    Person(const Person &p) {
        cout << "拷贝构造函数！" << endl;
        //m_Height = p.m_Height 编译器默认实现就是这行代码
        //深拷贝操作

        m_height = new int(*p.m_height);
        //如有数据在堆区创建务必要自己创建拷贝函数
    }

    ~Person() {
        //将堆区开辟的数据释放
        if (m_height != NULL) {
            delete m_height;
            m_height = NULL;
        }
        cout << "析构函数！" << endl;
    }
};

void test01() {
    Person p1(10, 190);
    cout << "p1的年龄为" << p1.m_age << endl << "p1身高为" <<
         *p1.m_height << endl;
    Person p2(p1);
    cout << "p2的年龄为" << p2.m_age << endl << "p2身高为" <<
         *p2.m_height << endl;
}

int main() {
    test01();
}