#include<iostream>
using namespace std;
class student{
    int roll_no;
    public:
        void set_roll_no(int);
        void get_roll_no(void);
};
void student::set_roll_no(int r){
    roll_no=r;
}
void student::get_roll_no(void){
    cout<<"The roll no is: "<<roll_no<<endl;
}
class exam:public student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float,float);
        void get_marks(void);
};
void exam::set_marks(float m1,float m2){
    maths=m1;
    physics=m2;
}
void exam::get_marks(){
    cout<<"The marks obtained in maths is "<<maths<<endl;
    cout<<"The marks obtained in physics is "<<physics<<endl;
}
class result:public exam{
    float percentage;
    public:
        void display_results(){
            get_roll_no();
            get_marks();
            cout<<"Your percentage is "<<(maths+physics)/2<<"%"<<endl;
        }     
};
int main(){
    result harry;
    harry.set_roll_no(420);
    harry.set_marks(94.0,90.0);
    harry.display_results();
    return 0;
}