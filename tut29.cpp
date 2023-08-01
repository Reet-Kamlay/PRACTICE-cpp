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
            cout<<"This is an amazing video: "<<title<<endl;
            cout<<"the rating of the video is: "<<rating<<endl;
            cout<<"The length of the video is: "<<videolength<<endl;
        }
};
class CWHtext:public CWH{
    int words;
    public:
        CWHtext(string s,float r,int wc):CWH(s,r){
            words=wc;
        }
        void display(){
            cout<<"This is an amazing video: "<<title<<endl;
            cout<<"the rating of the video is: "<<rating<<endl;
            cout<<"Total no of words: "<<words<<endl;
        }
};
int main(){
    string title;
    float rating,vlen;
    int words;
    title="Django Tutorial video";
    vlen=4.56;
    rating=4.89;
    CWHvideo djVideo(title,rating,vlen);

    title="Django Tutorial text";
    words=4.12;
    rating=4.99;
    CWHtext djText(title,rating,words);
    CWH *tuts[2];
    tuts[0]=&djVideo;
    tuts[1]=&djText;
    tuts[0]->display();
    tuts[1]->display();

    return 0;
} 