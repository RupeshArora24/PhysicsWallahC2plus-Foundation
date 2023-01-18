/*Q2 - Write a program to take the values of two variables a and b from the keyboard and then check if
both the conditions 'a < 50' and 'a < b' are true.*/
#include<iostream>
using namespace std;
int main(){

    int a,b;
    cin>>a>>b;
    if(a < 50 and a < b){
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
}