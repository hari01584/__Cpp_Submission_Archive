#include <iostream>
//#include "VISACard.cpp"
#include "HPVISACard.cpp"
#include <sstream>
using namespace std;
int main() {

   cout<<"Menu"<<endl;
   cout<<"1.VISA Card"<<endl;
   cout<<"2.HPVISA Card"<<endl;
   int x;
   cout<<"Enter the choice"<<endl;
   cin>>x;
   if(x!=1 && x!=2){
       cout<<"Invalid input"<<endl;
       return 0;
   }
   
   string type;
   cout<<"Enter the transaction type"<<endl;
   cin>>type;
   
   float amount;
   cout<<"Enter the transaction amount"<<endl;
   cin>>amount;
   
   if(x==1){
       float rewP;
       cout<<"Enter the reward points"<<endl;
       cin>>rewP;
       VISACard visa(type, amount, rewP);
       visa.computeRewardPoints();
   }
   else if(x==2){
       HPVISACard hpvisa(type, amount);
       hpvisa.computeRewardPoints();
   }

   return 0;
}