#include<iostream>
#include <iomanip> 
#include<string>

using namespace std;
class TicketBooking {
  string name;
  string walletNumber;
  string creditCard;
  string ccv;
  double amount;
  public:
  void makePayment(double amounts) {
    amount = amounts;
    cout<<fixed<<setprecision(2)<<"Amount Rs."<<amount<<" paid in cash"<<endl;
  }
  void makePayment(string walletnumbers, double amounts) {
    walletNumber = walletnumbers;
    amount = amounts;
    cout<<fixed<<setprecision(2)<<"Amount Rs."<<amount<<" paid using wallet number "<<walletNumber<<endl;
  }
  void makePayment(string creditcards, string ccvs, string names, double amounts) {
    creditCard = creditcards;
    ccv = ccvs;
    name = names;
    amount = amounts;
    cout<<fixed<<setprecision(2)<<"Amount Rs."<<amount<<" paid using credit card "<<creditCard<<endl;
  }

};