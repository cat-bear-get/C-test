//
// Created by jingwei on 2021/8/17.
//

#include <iostream>

using namespace std;

//初始化列表
class Person {
public:
    int m_A, m_B, m_C;

    //传统初始化
    /*Person(int a, int b, int c) {
        m_A = a;
        m_B = b;
        m_C = c;
    }*/

    //初始化列表
    Person(int a,int b,int c):m_A(a),m_B(b),m_C(c){

    }
};

void test01(){
    /*//传统初始化
    Person p(10,20,30);*/
    Person p(10,20,30);
    cout<<"m_A:"<<p.m_A<<endl<<"m_B:"<<p.m_B<<endl<<"m_C:"<<p.m_C<<endl;
}

int main() {
    test01();
}