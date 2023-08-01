#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream out;
    out.open("file3.txt");
    out<<"Hello There"<<endl;
    out<<"I am Reet Kamlay";
    out.close();
    ifstream in;
    string st,st2;
    in.open("file3.txt");
    in>>st>>st2;
    cout<<st<<st2;
    in.close();
}