// Q.1 Write a Program to find the area of a circle.

#include<iostream>

using namespace std;

int r;
float PI = 3.14;

main()
{
    cout << "Enter Your Radius value : " << endl;
    cin >> r;
    cout << "Area of cirlce is : "<< PI * r * r;
}