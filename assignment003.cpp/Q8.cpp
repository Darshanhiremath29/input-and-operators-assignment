#include<iostream>
using namespace std;
int main(){
    float x1,y1,x2,y2,x3,y3,slope1,slope2;
    cout<<"enter the points(x1,y1)";
    cin>>x1>>y1;
    cout<<"enter the points (x2,y2)";
    cin>>x2>>y2;
    cout<<"enter the points (x3,y3)";
    cin>> x3>>y3;

    slope1 =(y2-y1)/(x2-x1);
    slope2 = (y3-y2)/(x3-x2);
    if(slope1 == slope2){
        cout<<"all the points lie in same plane";

    }
    else{
        cout<<" all points does not lie on same plane  ";
    }
    }