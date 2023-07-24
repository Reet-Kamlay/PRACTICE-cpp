#include<iostream>
using namespace std;
class complex;
class calculator{
    public:
    int add(int a,int b){
        return (a+b);
    }
    int sumComplex(complex,complex);
};
class complex{
    int a,b;
    public:
        void setItem(int a1,int a2){
            a=a1;
            b=a2;
        }
        friend int calculator::sumComplex(complex o1,complex o2);
        void display(void){
            cout<<"The complex number is: "<<a<<"+"<<b<<"i"<<endl;
        }
};
int calculator:: sumComplex(complex o1,complex o2){
    return (o1.a+o2.a);
}
int main(){
    complex o1,o2;
    o1.setItem(1,4);
    o2.setItem(5,7);
    calculator calc;
    int res=calc.sumComplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 is "<<res;
    return 0;
}