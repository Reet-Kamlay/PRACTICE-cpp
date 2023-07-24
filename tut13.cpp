#include<iostream>
using namespace std;
class employee{
    public:
        int Id;
        float salary;
        employee(int inpId){
            Id=inpId;
            salary=34.0;
        }
};
class programmer:public employee{
    public:
        programmer(int inpId){
            Id=inpId;
        }
        int languagecode=9;
        void getdata(){
            cout<<Id<<endl;
        }
};
int main(){
    employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer skillf(1);
    cout<<skillf.languagecode<<endl;
    skillf.getdata;
    return 0;
}