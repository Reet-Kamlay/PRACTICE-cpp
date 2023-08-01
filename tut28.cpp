#include<iostream>
#include<cstring>
using namespace std;
class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s,float r){
            title=s;
            rating=r;
        }
        virtual void display(){}

};
class CWHvideo:public CWH{
    int videolength;
    public:
        CWHvideo(string s,float r,int vl):CWH(s,r){
            videolength=vl;
        }
    void display(){
        cout<<"This is an amazing video with title: "<<title<<endl;
        cout<<"the rating of the video is : "<<rating<<endl;
        cout<<"the length of the video is: "<<videolength<<endl;
    }
};
class CWHtext:public CWH{
    int text;
    public:
        CWHtext(string s,float r,int wc):CWH(s,r){
            text=wc;
        }
    void display(){
        cout<<"This is an amazing text tutorial with title: "<<title<<endl;
        cout<<"The ratings of this text tutorial: "<<rating<<" out of 5 years"<<endl;
        cout<<"No of words in this text tutorial is: "<<text<<" Words"<<endl;     
    }
};
int main(){
    string title;
    float rating,vlen;
    int words;
    title="Django Tutorial";
    vlen=4.56;
    rating=4.89;
    CWHvideo djVideo(title,rating,vlen);
    djVideo.display();
    return 0;
}