/*Write a program to print positive number entered by the user, if user enters a negative
number, it is skipped.*/


#include<iostream>
using namespace std;
int main(){
   int positiveNumber;
   cout<<"Enter the number = ";
   cin>>positiveNumber;

   if(positiveNumber>0){
        cout<<positiveNumber;
   }
   else{
    cout<<"The number is skipped.";
   }

}