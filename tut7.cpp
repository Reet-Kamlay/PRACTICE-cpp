#include<iostream>
using namespace std;
class BankDeposit{
    int principal;
    int years;
    float roi;
    float returnvalue;
    public:
        BankDeposit(){};
        BankDeposit(int p,int y,float r);
        BankDeposit(int p,int y,int r);
        void show();
};
BankDeposit::BankDeposit(int p,int y,float r){
    principal=p;
    years=y;
    roi=r;
    returnvalue=principal;
    for(int i=0;i<y;i++){
        returnvalue=returnvalue*(1+r);
    }

}
BankDeposit::BankDeposit(int p,int y,int r){
    principal=p;
    years=y;
    roi=float(r)/100;
    returnvalue=principal;
    for(int i=0;i<y;i++){
        returnvalue=returnvalue*(1+r);
    }
}
void BankDeposit::show(){
    cout<<"Principal Amount was "<<principal<<endl<<"After "<<years<<" years"<<endl<<"Amount is "<<returnvalue<<endl;
}
int main(){
    BankDeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1=BankDeposit(p,y,r);
    bd1.show();
    return 0;
}