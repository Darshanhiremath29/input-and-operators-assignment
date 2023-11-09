#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    cout<<"enter the sides of triangle :";
        cin >> side1 >> side2 >> side3;
    if(side1==side2 && side2==side3){
        cout<<"the triangle is equilatreal :";

    }
    else if (side1 == side2 || side2 == side3 || side1 == side3){
        cout<<"the triangle is isosceles";

    }
    else{
        cout<<"the triangle is scalene ";
    }
}
