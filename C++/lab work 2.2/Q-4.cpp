// 4 Write a Program to find Simple interest.

#include<iostream>
using namespace std;
float amount , intrest , time;
main(){
    cout << "Enter Your Amount : " << endl;
    cin >> amount;

    cout << "Enter your intrest : " << endl;
    cin >> intrest;

    cout << "Enter Time In month : "  << endl;
    cin >> time;

    cout << "Your Simple Intrest is : "<< amount * intrest * time / 2400;

}