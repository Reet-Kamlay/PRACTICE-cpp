#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst){
    list<int>::iterator it;
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<<" ";
    }
}
int main(){
    list<int> list1(4);
    list<int> list2;
    list2.push_back(23);
    list2.push_back(24);
    list2.push_back(21);
    list2.push_back(20);
    display(list2);
    list<int>::iterator iter;
    iter=list1.begin();
    *iter=45;
    iter++;
    *iter=9;
    iter++;
    *iter=10;
    iter++;
    *iter=20;
    iter++;
    display(list1);
    return 0;
}