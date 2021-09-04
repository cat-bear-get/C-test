#include <iostream>

using namespace std;

//静态成员
//所有对共享一份数据
//在编译阶段分内存
//类内声明，类外初始化
//静态成员函数
//所有对象共享一个函数
//静态成员函数只能访问静态成员变量

class Person {
public:
    //静态成员函数
    static void func() {
        m_A=100;//静态成员函数可以访问静态成员变量
        //m_B=200;//静态成员函数不可以访问非静态成员变量
        cout << "static func 的调用" << endl;
    }
    static int m_A;
    int m_B;
    //静态成员函数也是有访问权限的
private:
    static void func2(){

    }
};

int Person::m_A;

//有两种访问方式
void test01() {
    //通过对象访问
    Person p;
    p.func();
    //通过类名访问
    Person::func();
}

int main() {
    test01();
}
