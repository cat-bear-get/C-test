//
// Created by jingwei on 2021/8/15.
//

#include <iostream>

using namespace std;

//函数的默认参数
//注意事项
//1、如果某位置存在默认值，从这个位置从左到右必须要有默认参数
//2、声明与实现只能有一个设默认值
int func(int a, int b = 10, int c = 10) {
    return a + b + c;
}

int main() {
    cout << func(10, 20, 15) << endl;
    cout << func(40) << endl;
}