#include<iostream>
using namespace std;
class base{
    int data1;
    public:
        int data2;
        void setdata();
        int getdata1();
        int getdata2();
};
void base::setdata(void){
    data1=10;
    data2=20;
}
int base::getdata1(){
    return data1;
}
int base::getdata2(){
    return data2;
}
class derived:public base{
    int data3;
    public:
        void process();
        void display();
};
void derived::process(){
    data3=data2*getdata1();
}
void derived::display(){
    cout<<"value of data 1 "<<getdata1()<<endl;
    cout<<"value of data 2 "<<data2<<endl;
    cout<<"value of data 3 "<<data3<<endl;
}
int main(){
    derived dir;
    dir.setdata();
    dir.process();
    dir.display();
    return 0;
}