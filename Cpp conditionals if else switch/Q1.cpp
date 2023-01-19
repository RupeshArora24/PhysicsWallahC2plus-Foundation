/*Q1 - Write a program which takes the values of length and breadth from user and check if it is
a square or not.*/
#include<iostream>
using namespace std;
int main(){
    int length,bredth;
    cin>>length>>bredth;

    if(length==bredth){
        cout<<"It is a square"<<endl;
    
    }
    else{
        cout<<"It is a rectangle"<<endl;
    }
}