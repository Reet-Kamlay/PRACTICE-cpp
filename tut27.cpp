#include<iostream>
using namespace std;
class base{
    public:
        int data1;
        void set_data1(int i){
            data1=i;
        }
        virtual void get_data(void){
            cout<<"The value of data is: "<<data1<<endl;
        }
};
class derived:public base{
    
    public:
        int data2;
        void set_data2(int i){
            data2=i;
        }
        void get_data(void){
            cout<<"The value of the data 1 of base class is: "<<data1<<endl;
            cout<<"The value of data 2 of derived class is: "<<data2<<endl;
        }
};
int main(){
    base *base_pointer;
    base base_obj;
    derived derived_obj;
    base_pointer=&derived_obj;
    base_pointer->get_data();
}