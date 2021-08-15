//
// Created by jingwei on 2021/8/15.
//

#include <iostream>

using namespace std;

//值传递
void mySwap01(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

//地址传递
void mySwap02(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

//引用传递
void mySwap03(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10;
    int b = 20;

    mySwap01(a, b);
    cout << "值传递：" << endl;
    cout << "a=" << a << endl << "b=" << b << endl;

    mySwap02(&a, &b);
    cout << "地址传递：" << endl;
    cout << "a=" << a << endl << "b=" << b << endl;

    a=10,b=20;

    mySwap03(a,b);
    cout << "引用传递：" << endl;
    cout << "a=" << a << endl << "b=" << b << endl;
}