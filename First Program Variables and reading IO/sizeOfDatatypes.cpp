#include<iostream>
using namespace std;
int main(){

    int charcter, Short, intiger, Long, Longer, Float,Double, Long_double, Bool;
    charcter=sizeof(char);
    Short=sizeof(short);
    intiger=sizeof(int);
    Long=sizeof(long);
    Longer=sizeof(long long);
    Float=sizeof(float);
    Double=sizeof(double);
    Long_double=sizeof(long double);
    Bool=sizeof(bool);

    cout<<"The sizeof(char) :"<<charcter<<"bytes"<<endl;
    cout<<"The sizeof(short) :"<<Short<<"bytes"<<endl;
    cout<<"The sizeof(int) :"<<intiger<<"bytes"<<endl;
    cout<<"The sizeof(long) :"<<Long<<"bytes"<<endl;
    cout<<"The sizeof(long long) :"<<Longer<<"bytes"<<endl;
    cout<<"The sizeof(float) :"<<Float<<"bytes"<<endl;
    cout<<"The sizeof(double) :"<<Double<<"bytes"<<endl;
    cout<<"The sizeof(long doube) :"<<Long_double<<"bytes"<<endl;
    cout<<"The sizeof(bool) :"<<Bool<<"bytes"<<endl;

    return 0;

}