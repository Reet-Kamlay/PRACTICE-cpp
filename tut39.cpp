#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    map<string,int> marksmap;
    marksmap["Sourik"]=100;
    marksmap["Jeet"]=90;
    marksmap["sujoy"]=95;
    map<string,int> ::iterator iter;
    for(iter=marksmap.begin();iter!=marksmap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    return 0;
}