//
// Created by jingwei on 2021/8/15.
//

#include <iostream>

using namespace std;

//ֵ����
void mySwap01(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

//��ַ����
void mySwap02(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

//���ô���
void mySwap03(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10;
    int b = 20;

    mySwap01(a, b);
    cout << "ֵ���ݣ�" << endl;
    cout << "a=" << a << endl << "b=" << b << endl;

    mySwap02(&a, &b);
    cout << "��ַ���ݣ�" << endl;
    cout << "a=" << a << endl << "b=" << b << endl;

    a=10,b=20;

    mySwap03(a,b);
    cout << "���ô��ݣ�" << endl;
    cout << "a=" << a << endl << "b=" << b << endl;
}