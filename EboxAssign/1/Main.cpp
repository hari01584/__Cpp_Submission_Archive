#include<iostream>
#include<string>
#include "TicketBooking.cpp"
using namespace std;
int main()
{
       cout<<"Payment methods"<<endl;
       cout<<"1.Cash payment"<<endl;
       cout<<"2.Wallet payment"<<endl;
       cout<<"3.Credit card payment"<<endl;
       int x;
       cout<<"Enter your option:"<<endl;
       cin>>x;
       double amount;
       cout<<"Enter the amount :"<<endl;
       cin>>amount;
       
       TicketBooking t;
       if(x==1){
           t.makePayment(amount);
       }
       else if(x==2){
           string walletNo;
           cout<<"Enter the wallet number:"<<endl;
           cin>>walletNo;
           t.makePayment(walletNo, amount);
       }
       else if(x==3){
           string credN;
           cout<<"Enter the credit card number:"<<endl;
           cin>>credN;
           
           string ccv;
           cout<<"Enter the ccv number:"<<endl;
           cin>>ccv;
           
           string name;
           cout<<"Enter name:"<<endl;
           cin>>name;
           
           t.makePayment(credN, ccv, name, amount);
       }
       
       
       return 0;
}        
