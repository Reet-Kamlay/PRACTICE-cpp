#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
int main(){
    int element;
    vector<int> vec1;
    for(int i=0;i<4;i++){
        cout<<"Enter the value of element: ";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    vector<int> :: iterator iter=vec1.begin();
    vec1.insert(iter+1,5,556);
    display(vec1);
    return 0;
}