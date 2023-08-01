#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout("file3.txt");
    cout<<"Enter something to make it write into the file: ";
    string st;
    cin>>st;
    fout<<st;
    fout.close();
    ifstream fin("file3.txt");
    string content;
    fin>>content;
    cout<<"The contents of the file are: "<<content;
    fin.close();
}