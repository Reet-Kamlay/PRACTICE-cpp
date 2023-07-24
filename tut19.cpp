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
    cout<<"The roll no is : "<<roll_no;
}
class exam:public student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float,float);
        void display_marks(void);
};
void exam::set_marks(float m1,float m2){
    maths=m1;
    physics=m2;
}
void exam::display_marks(void){
    cout<<"The marks of the maths is: "<<maths;
    cout<<"The marks of the physics is: "<<physics;
}