//leap yar is possible if year%400=0,not a leap year if div by 100 and not by 400,
// a leap year if divisible by 100 and divisible by 4

#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter a year:";
    cin>>year;
    if(year % 400 ==0){
        cout<< year <<"is a leap year";

    }
    else if(year % 100 ==0){
        cout<< year<< " is not at leap year";

    }
    else if(year % 4==0){
        cout<< year <<"is a leap year ";

    }
    else{
        cout<<year<<"is not a leap year";
    }
    
}