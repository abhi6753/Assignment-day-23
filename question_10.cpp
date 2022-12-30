//10. Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;
int main()
{
    int arr[10],add=0;
    cout<<"Enter 10 number:"<<endl;
    for(int i = 0;i<10;i++)
       cin>>arr[i];
    for(int i =0;i<10;i++)
       add +=arr[i];
    cout<<"sum of entered 10 number is "<<add;
    cin.get();
    return 0;
}