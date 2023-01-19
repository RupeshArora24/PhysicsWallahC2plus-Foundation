/*Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication
and division.*/


#include<iostream>
using namespace std;
int main(){

char op;

cout<<"enter the op(+,-,/,*) = ";

cin>>op;

float num1,num2;
cout<<"enter num1 = ";
cin>>num1;
cout<<"enter num2 = ";
cin>>num2;

switch(op){

    case '+':
       cout<<"the value of operation is = "<<num1+num2<<endl;
       break;
    case '-':
       cout<<"the value of operation is = "<<num1-num2<<endl;   
       break;
    case '*':
       cout<<"the value of operation is = "<<num1*num2<<endl;   
       break;
    case '/':
       cout<<"the value of operation is = "<<num1/num2<<endl;
       break;   
    default :
       cout<<"entered operator is wrong!!!"<<endl; 
    
}
}