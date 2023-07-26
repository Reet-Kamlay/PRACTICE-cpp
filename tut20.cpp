#include<iostream>
using namespace std;
class simple_calculator{
    int n1;
    int n2;
    public:
        void n1_input(void);
        void n2_input(void);
        void add(int n1,int n2);
        void sub(int n1,int n2);
        void multiply(int n1,int n2);
        void divide(int n1,int n2);
};
void simple_calculator::n1_input(void){
    cout<<"Enter the value of the first number: "<<endl;
    cin>>n1;
}
void simple_calculator::n2_input(void){
    cout<<"Enter the value of the second number: "<<endl;
    cin>>n2;
}
void simple_calculator::add(int a,int b){
    int sum=a+b;
    cout<<"The addition of the numbers is: "<<sum<<endl;
}
void simple_calculator::sub(int a,int b){
    int subtract=a-b;
    cout<<"The subtraction of the numbers is: "<<subtract<<endl;
}
void simple_calculator::multiply(int a,int b){
    int multiply=a*b;
    cout<<"The multiplication of the numbers is: "<<multiply<<endl;
}
void simple_calculator::divide(int a,int b){
    int div=a/b;
    cout<<"The division of the numbers is: "<<div<<endl;
}