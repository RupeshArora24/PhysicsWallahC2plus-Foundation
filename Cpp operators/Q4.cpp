/*Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.*/


#include<iostream>
using namespace std;
int main(){
    int first,fourth,fiveDigitNumber;
    cin>>fiveDigitNumber;
    //loop for fourth digit 
    while(fiveDigitNumber>=10000){
        fiveDigitNumber/=10;
    }
    fourth=(int) fiveDigitNumber;
    fourth=fourth%10;
    cout<<"fourth digit = "<<fourth<<endl;

    // loop for first digit 
    while(fiveDigitNumber>=10){
        fiveDigitNumber/=10;
    } 
    first=(int) fiveDigitNumber;
    cout<<"first digit = "<<first<<endl;

    cout<<"addition = "<<first+fourth<<endl;
    return 0;


}