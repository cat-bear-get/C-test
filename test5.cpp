//
// Created by jingwei on 2021/8/15.
//

#include <iostream>

using namespace std;

//引用做函数的返回值
//1、不要返回局部变量的引用
int &test01() {
    int a = 10;
    return a;
}

//2、函数的调用可以作为左值
int &test02() {
    static
    int a = 10;
    return a;
}

int main() {
    //int &ref = test01();
    //cout << "ref=" << ref << endl;

    int &ret = test02();
    cout << "ret=" << ret << endl;

    test02() = 1000;
    cout << "ret=" << ret << endl;
}