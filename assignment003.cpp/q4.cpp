#include<iostream>
using namespace std;
int main(){
    int length,breadth;
    cout<<"enter the length and breadth";
    cin>>length>>breadth;
    int area = length*breadth;
    int perimeter = 2*(length+breadth);
    if(area>perimeter){
        cout<<"area is greater than the perimeter ";

    }
    else{
        cout<<"perimeter is greater than the perimeter";
    }
}