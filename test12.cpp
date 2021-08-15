//
// Created by jingwei on 2021/8/15.
//

#include <iostream>

using namespace std;

class C1 {
    int m_A;//默认权限是私有
};

struct C2 {
    int m_A;//默认权限是公共
};

int main() {
    //struct 和 class 区别
    //struct默认权限是公共public
    //class默认权限是私有private

    /*C1 c1;
    c1.m_A=100;*/       //错误

    C2 c1;
    c1.m_A = 100;

}