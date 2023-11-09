//volume of cylinder
#include<iostream>
using namespace std;
int main(){
   int r;
   cout<<"enter the radius of cylinder: ";
   cin>>r;
   int h;
   cout<<"enter the hieght of cylinder :";
   cin>>h;
   float pi=3.14;
   float v=pi*r*r*h;
   cout<<"volume of cylinder is : "<<v;
}