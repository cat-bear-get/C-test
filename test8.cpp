//
// Created by jingwei on 2021/8/15.
//

#include <iostream>

using namespace std;

//占位参数
void func(int a, int) {
    cout << "this is func" << endl;
}

int main() {
    func(10, 10);
}