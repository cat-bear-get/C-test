//
// Created by jingwei on 2021/8/16.
//

#include <iostream>

using namespace std;

#define PI 3.1415926

class point {
private:
    double X, Y;
public:
    void set_X(double x) {
        X = x;
    }

    void set_Y(double y) {
        Y = y;
    }

    double get_X() {
        return X;
    }

    double get_Y() {
        return Y;
    }
};

class cyc {
private:
    double R;
    point CENTER;
public:
    //设置半径
    void set_R(double r) {
        R = r;
    }

    //设置圆心
    void set_CENTER(point center) {
        CENTER = center;
    }

    //获取园的数据
    double get_R() {
        return R;
    }

    point get_CENTER() {
        return CENTER;
    }

    double get_S(){
        return PI*R*R;
    }
};

string isSame(cyc &C, point &P) {
    if ((C.get_CENTER().get_X() - P.get_X()) * (C.get_CENTER().get_X() - P.get_X())
        + (C.get_CENTER().get_Y() - P.get_Y()) * (C.get_CENTER().get_Y() - P.get_Y()) == C.get_R() * C.get_R()) {
        return "点在圆上";
    } else if ((C.get_CENTER().get_X() - P.get_X()) * (C.get_CENTER().get_X() - P.get_X())
               + (C.get_CENTER().get_Y() - P.get_Y()) * (C.get_CENTER().get_Y() - P.get_Y()) > C.get_R() * C.get_R()) {
        return "点在园外";
    } else {
        return "点在园内";
    }
}

int main() {
    cyc C;
    point P, CEN;
    C.set_R(5);
    CEN.set_X(5);
    CEN.set_Y(0);
    C.set_CENTER(CEN);

    P.set_X(15);
    P.set_Y(0);

    string ret= isSame(C,P);
    cout<<"ret:"<<ret<<endl;
    double s=C.get_S();
    cout<<"S:"<<s<<endl;
}