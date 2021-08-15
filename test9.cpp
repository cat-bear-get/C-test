//
// Created by jingwei on 2021/8/15.
//

#include <iostream>

using namespace std;

void func(string A) {
    cout << "func  的调用！" << endl;
}

void func() {
    cout << "func  的调用？" << endl;
}

int main() {
    //函数重载：可以让函数名相同
    //条件：
    //1、同一个作用域
    //2、函数名称相同
    //3、函数参数类型不同，或者个数不同或者顺序不同

    //注意：函数的返回值不可以作为函数重载的条件

    func("print");
    func();

}