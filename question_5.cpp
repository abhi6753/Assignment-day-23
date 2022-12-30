//5. Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main()
{
    float l,w,h;
    cout<<"Enter length, width and height :"<<endl;
    cin>>l>>w>>h;
    cout<<"Volume = "<<l*w*h;
    cin.get();
    return 0;
}