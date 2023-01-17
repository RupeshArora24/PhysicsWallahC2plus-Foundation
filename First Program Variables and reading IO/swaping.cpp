#include<iostream>
using namespace std;
int main(){

   int a,b,c;
   cin>>a>>b;
   cout<<"before swapping : "<<a<<","<<b<<endl;
   c=a;
   a=b;
   b=c;
   cout<<"after swapping : "<<a<<","<<b<<endl;
   return 0;
}