/*Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
calculate Profit or Loss.*/
#include<iostream>
using namespace std;
int main(){
   int costPrice,sellingPrice;
   cout<<"costPrice = ";
   cin>>costPrice;
   cout<<"sellingPrice = ";
   cin>>sellingPrice;

   if(costPrice>sellingPrice){
    cout<<" loss = "<<costPrice-sellingPrice<<endl;
   }
   else{
    cout<<" profit = "<<sellingPrice-costPrice<<endl;
   }
}