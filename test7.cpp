//
// Created by jingwei on 2021/8/15.
//

#include <iostream>

using namespace std;

//������Ĭ�ϲ���
//ע������
//1�����ĳλ�ô���Ĭ��ֵ�������λ�ô����ұ���Ҫ��Ĭ�ϲ���
//2��������ʵ��ֻ����һ����Ĭ��ֵ
int func(int a, int b = 10, int c = 10) {
    return a + b + c;
}

int main() {
    cout << func(10, 20, 15) << endl;
    cout << func(40) << endl;
}