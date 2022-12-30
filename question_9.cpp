//9. Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b,max;
    cout<<"Enter two number : ";
    cin>>a>>b;
    if(a>b)
     max =a;
    else 
     max = b;
    cout<<"Maximum = "<<max;
    cin.get();
    return 0;
}