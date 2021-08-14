#include<iostream>
#include<string>
using namespace std;

struct student
{
    string name;
    double score;
};

struct techer
{
    string name;
    struct student STU[5];
};

void newspace(struct techer *TECH,int len)
{
    string namespce = "ABCDE";
    for (int i = 0; i < len; i++)
    {
        TECH[i].name="Techer_";
        TECH[i].name+=namespce[i];
        
        for (int j = 0; j < 5; i++)
        {
            TECH[i].STU[j].name="Student_";
            TECH[i].STU[j].name+=namespce[j];

            double seet=rand()%61+40;
            TECH[i].STU[j].score=seet;
        }
        
    }

}

void print(struct techer *TECH,int len)
{
    for (int i = 0; i < len; i++)
    {
        cout<<"techer_name"<<TECH[i].name<<endl;
        for (int j = 0; i < 5; j++)
        {
            cout<<"\t"<<"student_name"<<TECH[i].STU[j].name<<"\t"
                <<"syudent_score"<<TECH[i].STU[j].score<<endl;
        }
        
    }
    
}

int main()
{
    struct techer TECH[3];
    int len = sizeof(TECH)/sizeof(TECH[0]);
    newspace(TECH,len);
    print(TECH,len);
    return 0;
}
