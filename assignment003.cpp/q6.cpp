#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the  marks :";
    cin>>a>>b>>c;
    if(a<b && a<c){
        cout<<"a i least  ";

    }
    else if(b<a && b<c){
        cout<<"b is least ";

    }
    else{
        cout<<"c is least";
    }
}