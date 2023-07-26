#include<iostream>
using namespace std;
class student{
    int roll_no;
    public:
        void set_roll_no(int rollno){
            roll_no=rollno;
        }
        void get_roll_no(void){
            cout<<"The roll of the student is: "<<roll_no<<endl;
        }
};
class marks:virtual public student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float m1,float m2){
            maths=m1;
            physics=m2;
        }
        void get_marks(void){
            cout<<"The marks of maths is: "<<maths<<endl<<"The marks of the physics is: "<<physics<<endl;
        }
};
class sports:virtual public student{
    protected:
        float score;
    public:
        void set_score(int s){
            score=s;
        }
        void get_score(void){
            cout<<"The score of the student is: "<<score<<endl;
        }
};
class result:public marks,public sports{
    protected:
        float total;
    public:
        void display(void){
            total=maths+physics+score;
            get_roll_no();
            get_marks();
            get_score();
            cout<<"The total marks is :"<<total<<endl;
        }
};
int main(){
    result harry;
    harry.set_roll_no(42);
    harry.set_marks(94.3,98.3);
    harry.set_score(9);
    harry.display();
    return 0;
}
