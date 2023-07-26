#include<iostream>
using namespace std;
class shop{
    int id;
    float price;
    public:
        void set_data(int a,float b){
            id=a;
            price=b;
        }
        void get_data(void){
            cout<<"The id of the item is: "<<id<<endl;
            cout<<"The price of the item: "<<price<<endl;
        }
};
int main(){
    int size=3;
    shop *ptr=new shop[size];
    shop*ptrtemp=ptr;
    int p,i;
    float q;
    for(i=0;i<size;i++){
        cout<<"Enter the id and price of the item: "<<endl;
        cin>>p>>q;
        ptr->set_data(p,q);
        ptr++;
    }
    for(i=0;i<size;i++){
        ptrtemp->get_data();
        ptrtemp++;
    }
    return 0;
}