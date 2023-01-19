/*Q1 - Q2 - Write a program to print absolute value of a number entered by the user.*/
#include<iostream>
using namespace std;
int main(){
    int num,a;
    
    cin>>num;
    // absolute value
    a=num+(-(2*num));
    if(num>=0){
        cout<<"Absolute value = "<<num<<endl;
    }
    else{
        cout<<"Absolute value = "<<a<<endl;
    }
}