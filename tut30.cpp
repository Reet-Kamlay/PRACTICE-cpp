#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string st="Reet is a good boy and siuuu";
    ofstream out("file1.txt");
    out<<st;
    string st2;
    ifstream in("file2.txt");
    in>>st2;

     
}