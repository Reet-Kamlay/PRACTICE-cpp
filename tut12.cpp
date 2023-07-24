#include<iostream>
using namespace std;
class employee{
    
    public:
    int Id;
    float salary;
        employee(int inpId){
            Id=inpId;
            salary=34;
        }
        employee(){};
};
class programmer:employee{
    public:
    programmer(int inpId){
        Id=inpId;
    }
    int languageCode=9;
};
int main(){
    employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl; 
    programmer skillF(1);
    cout<<skillF.languageCode<<endl;
    return 0;
}
