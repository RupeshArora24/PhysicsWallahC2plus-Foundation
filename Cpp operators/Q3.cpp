/*Q3 - There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many
girls received grades "A" if 17 boys made up 80% of the students that received grades "A".*/


#include<iostream>
using namespace std;
int main(){
    int total,boys,girls;
    boys=17;//who gets the grade A
    total=(80*45)/100 ;//as 80% of 45 = total students recived grade A
    girls=total-boys;
    cout<<"Girls : "<<girls<<endl;
    return 0;

}