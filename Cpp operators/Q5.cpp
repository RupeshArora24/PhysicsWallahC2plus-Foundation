/*Q5 - Write a program to calculate the sum of digits of a 3 digit number.*/


#include<iostream>
using namespace std;
int main(){
    int first,second,third,threeDigitNumber;
    cin>>threeDigitNumber;

    //third digit
    third = threeDigitNumber%10;
    cout<<"third digit = "<<third<<endl;

    //loop for second digit 
    while(threeDigitNumber>=100){
        threeDigitNumber/=10;
    }
    second=(int) threeDigitNumber;
    second=second%10;
    cout<<"second digit = "<<second<<endl;

    // loop for first digit 
    while(threeDigitNumber>=10){
        threeDigitNumber/=10;
    } 
    first=(int) threeDigitNumber;
    cout<<"first digit = "<<first<<endl;
    
    //addition of all three digits
    cout<<"addition = "<<first+second+third<<endl;
    return 0;


}