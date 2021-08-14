#include <iostream>
#include <string>

using namespace std;

struct hero {
    string name;
    int age;
    string sex;
};

void bubbleSort(struct hero heroArray[], int len) {
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - i - 1; ++j) {
            if (heroArray[j].age > heroArray[j + 1].age) {
                struct hero temp = heroArray[j];
                heroArray[j] = heroArray[j + 1];
                heroArray[j + 1] = temp;
            }
        }
    }
}

void printhero(struct hero heroArray[],int len){
    for (int i = 0; i < len; ++i) {
        cout<<"name:"<<heroArray[i].name<<" age:"<<heroArray[i].age<<" sex:"<<heroArray[i].sex<<endl;
    }
}

int main() {
    struct hero heroArray[5] = {
            {"����", 23, "��"},
            {"����", 22, "��"},
            {"����", 21, "��"},
            {"�ŷ�", 20, "��"},
            {"����", 19, "Ů"}
    };

    int len = sizeof(heroArray) / sizeof(heroArray[0]);

    cout<<"before:"<<endl;
    for (int i = 0; i < len; ++i) {
        cout<<"name:"<<heroArray[i].name<<" age:"<<heroArray[i].age<<" sex:"<<heroArray[i].sex<<endl;
    }

    cout<<"after:"<<endl;
    bubbleSort(heroArray, len);
    printhero(heroArray,len);

}
