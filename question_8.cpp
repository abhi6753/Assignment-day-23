//8. Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter value of a and b :"<<endl;
    cin>>a>>b;
    cout<<"Before swapping :"<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl;
    a = a+b; 
    b = a-b;
    a = a-b;
    cout<<"After swapping :"<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl;
    cin.get();
    return 0;
}