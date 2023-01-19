/*Q6. Write a program to calculate marks to grades . Follow the conversion rule as given below :

100 – 90  
90 – 80
80 – 70
70 – 60
60 – 50
50 – 40
40 – 30
30 – 0
A+
A
B+
B
C
D
E
F*/


#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter the marks = ";
    cin>>marks;

    if(marks>90 && marks<=100){
        cout<<"Grade = A+";
    }
    else if(marks>80 && marks<=90){
        cout<<"Grade = A";
    }
    else if(marks>70 && marks<=80){
        cout<<"Grade = B+";
    }
    else if(marks>60 && marks<=70){
        cout<<"Grade = B";
    }
    else if(marks>50 && marks<=60){
        cout<<"Grade = C";
    }
    else if(marks>40 && marks<=50){
        cout<<"Grade = D";
    }
    else if(marks>30 && marks<=40){
        cout<<"Grade = E";
    }
    else{
        cout<<"Grade = F";
    }
}