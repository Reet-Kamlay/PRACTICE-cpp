#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string,int> marksmap;
    marksmap["Reet"]=98;
    marksmap["Aayush"]=99;
    marksmap["Rohan"]=99;
    map<string,int
    
    
    
    >::iterator it;
    for(it=marksmap.begin();it!=marksmap.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}