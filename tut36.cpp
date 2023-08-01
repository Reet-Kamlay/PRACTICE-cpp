#include<iostream>
#include<vector>
using namespace std;
template<class T>
void display(vector<T> &v){
    cout<<"Displaying this vector: "<<endl;
    for(int i=0;i<4;i++){
        cout<<v[i]<<endl;
    }
}
int main(){
    vector<int> vec1;
    vector<char> vec2(4);
    vector<int> vec3(6,3);
    vec2.push_back('c');
    display(vec2);
    return 0;
}