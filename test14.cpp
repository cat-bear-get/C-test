//
// Created by jingwei on 2021/8/15.
//

#include <iostream>

using namespace std;

class Cube {
private:
    int m_H;
    int m_L;
    int m_W;
public:
    int area, volume;

    void setH(int Height) {
        m_H = Height;
    }

    void setL(int Len) {
        m_L = Len;
    }

    void setW(int Weight) {
        m_W = Weight;
    }

    void get_area() {
        area = 2 * (m_W * m_L + m_W * m_H + m_L * m_H);
    }

    void get_volume() {
        volume = m_H * m_L * m_W;
    }

    void Compared(int H, int L, int W) {
        if (L==m_L&&H==m_H&&W==m_W){
            cout<<"they are same!!!!"<<endl;
        } else{
            cout<<"they are different!!!!"<<endl;
        }
    }
};

int main() {
    Cube C1;
    C1.setH(2);
    C1.setL(2);
    C1.setW(3);
    C1.get_area();
    cout << "area:" << C1.area << endl;
    C1.get_volume();
    cout << "volume:" << C1.volume << endl;
    int H,L,W;
    cin>>H>>L>>W;
    C1.Compared(H,L,W);
}