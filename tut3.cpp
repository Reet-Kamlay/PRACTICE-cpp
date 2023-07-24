#include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void counter_init(void)
    {
        counter = 0;
    }
    void setitem(void);
    void displayitem(void);
};
void shop::setitem(void){
    cout<<"Enter the Id of the item: "<<endl;
    cin>>itemId[counter];
    cout<<"Enter the price of the item: "<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop::displayitem(void){
    for(int i=0;i<counter;i++){
        cout<<"The itemId is "<<itemId[i]<<" and the itemPrice is "<<itemPrice[i]<<endl;
    }
}
int main(){
    shop dukaan;
    dukaan.counter_init();
    dukaan.setitem();
    dukaan.setitem();
    dukaan.setitem();
    dukaan.displayitem();
    return 0;
}