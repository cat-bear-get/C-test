//
// Created by jingwei on 2021/8/15.
//

#include <iostream>

using namespace std;

//�����������ķ���ֵ
//1����Ҫ���ؾֲ�����������
int &test01() {
    int a = 10;
    return a;
}

//2�������ĵ��ÿ�����Ϊ��ֵ
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