#include<iostream>
using namespace std;
class base{
    public:
        int data1;
        void set_data1(int i){
            data1=i;
        }
        void get_data1(void){
            cout<<"The value of data is: "<<data1<<endl;
        }
};
class derived:public base{
    
    public:
        int data2;
        void set_data2(int i){
            data2=i;
        }
        void get_data2(void){
            cout<<"The value of the data 1 of base class is: "<<data1<<endl;
            cout<<"The value of data 2 of derived class is: "<<data2<<endl;
        }
};
int main(){
    base *base_pointer;
    derived obj1;
    base_pointer=&obj1;
    base_pointer->set_data1(23);
    base_pointer->get_data1();
    derived *derived_pointer;
    base obj2;
    derived_pointer=&obj1;
    derived_pointer->set_data2(34);
    derived_pointer->set_data1(25);
    derived_pointer->get_data2();
    derived_pointer->get_data1();
    return 0;
}