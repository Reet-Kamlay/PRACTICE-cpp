#include<iostream>
#include<iomanip>
using namespace std;
class Employee
{
private:
    int a,b,c;
public:
    int d,e;
    void setdata(int a,int b,int c);
    void getdata(){
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
        cout<<"The value of c is: "<<c<<endl;
        cout<<"The value of d is: "<<d<<endl;
        cout<<"The value of e is: "<<e<<endl;
    }
};
void Employee::setdata(int a1,int a2,int a3){
    a=a1;
    b=a2;
    c=a3;
}
int main()
{
    // int num1,num2;
    // cout<<"Enter the value of num1:\n";
    // cin>>num1;
    // cout<<"Enter the value of num2:\n";
    // cin>>num2;
    // cout<<"The sum is: "<<num1+num2;
    
    // int a=3,b=78,c=1233;
    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;
    // enum meal{breakfast,lunch,dinner};
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;
    Employee harry;
    harry.d=23;
    harry.e=45;
    harry.setdata(1,2,3);
    harry.getdata();
    return 0;
}
