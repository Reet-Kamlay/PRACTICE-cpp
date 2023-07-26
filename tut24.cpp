#include<iostream>
using namespace std;
class complex{
    int real;
    int imaginary;
    public:
        void get_data(void){
            cout<<"The real part of the complex no is: "<<real<<endl;
            cout<<"the imaginary part of the complex no is: "<<imaginary<<endl;
        }
        void set_data(int i,int r){
            imaginary=i;
            real=r;
        }
};
int main(){
    complex *ptr =new complex;
    (*ptr).set_data(1,2);
    (*ptr).get_data();
}