//
// Created by jingwei on 2021/8/14.
//

#include <iostream>

using namespace std;

int main()
{
    int a=10;
    int b=20;
    cout<<"a:"<<a<<endl;
    int &c=a;
    c=30;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
}