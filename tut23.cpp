#include<iostream>
using namespace std;
class base1{
    int data1;
    public:
        base1(int i){
            data1=i;
            cout<<"Base1 constructor is called";
        }
        void print_data_base1(void){
            cout<<"THe value of data 1 is: "<<data1<<endl;
        }
};
class base2{
    int data2;
    public:
        base2(int i){
            data2=i;
            cout<<"Base 2 constructor is called";
        }
        void print_data_base2(void){
            cout<<"The value of data 2 is:"<<data2<<endl;
        }
};
class derived:public base1,public base2{
    int derived1;
    int derived2;
    public:
        derived(int a,int b,int c,int d):base1(a),base2(b){
            derived1=c;
            derived2=d;
            cout<<"Derived constructor is called";
        }
        void print_data(void){
            cout<<"The value of derived 1 is : "<<derived1<<endl;
            cout<<"The value of derived 2 is : "<<derived2<<endl;
        }
};
int main(){
    derived reet(1,2,3,4);
    reet.print_data();
    return 0;
}