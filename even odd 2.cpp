#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number to check if even or odd";
    cin>>num;
    if(num%2)
      cout<<"The number "<<num<<" is odd";
    else
      cout<<"The number "<<num<<" is even";
}