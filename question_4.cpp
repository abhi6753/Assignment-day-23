//4. Write a C++ program to calculate the area of a circle
#include<iostream>
using namespace std;
int main()
{
    #define PI 3.14;
    float radius;
    cout<<"Enter radius of circle: ";
    cin>>radius;
    cout<<"Area = "<<radius*PI;
    cin.get();
    return 0;
}