#include<iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"enter the co ordinates : ";
    cin>> x>>y;
    if(x==0 && y==0){
        cout<<"points are in origin";

    }
    else if (x==0 && y!=0){
        cout<<"points are in x axis";

    }
    else if (x!=0 && y==0){
        cout<<"points are in y axis";

    }
    else(x!=0 && y!=0);
    {
        cout<<"points are in plane";
        
    }
}
