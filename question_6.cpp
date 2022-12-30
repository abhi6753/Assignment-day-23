//6. Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter 3 number to get its average:"<<endl;
    cin>>a>>b>>c;
    cout<<"Average = "<<(a+b+c)/3;
    cin.get();
    return 0;
}