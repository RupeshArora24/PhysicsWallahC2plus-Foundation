/*Q6 - Design a calculator to perform basic arithmetic operations (+,-,/,*,%).*/


#include<iostream>
using namespace std;
int main(){
    int num1,num2,Addition,Subtraction,Multiplication,Modulo;
    float Division;
    cin>>num1>>num2;
    cout<<"num1 = "<<num1<<endl<<"num2 = "<<num2<<endl;
    Addition = num1+num2;
    Subtraction=num1-num2;
    Multiplication=num1*num2;
    Division=num1/num2;
    Modulo=num1%num2;

    cout<<"Addition = "<<Addition<<endl;
    cout<<"Subtraction = "<<Subtraction<<endl;
    cout<<"Multiplication = "<<Multiplication<<endl;
    cout<<"Divison = "<<Division<<endl;
    cout<<"Modulus = "<<Modulo<<endl;

    return 0;
}