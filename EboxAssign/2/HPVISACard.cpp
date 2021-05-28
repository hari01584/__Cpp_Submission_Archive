#include <iostream>
#include "VISACard.cpp"
using namespace std;
class HPVISACard : VISACard
{
    public:
        void computeRewardPoints() {
            float rewardPoints;
            if(type=="Fuel"){
                rewardPoints = (amount * (3 / 100.0))+ 10;
            }
            else{
                rewardPoints = amount * (3 / 100.0);
            }
            cout<<"Card details:"<<endl;
            cout<<"Type: "<<type<<endl;
            cout<<"Amount: "<<amount<<endl;
            cout<<fixed<<setprecision(1)<<"Reward point: "<<rewardPoints<<endl;
        }

        HPVISACard(string type1, double amount1) : VISACard(type1, amount1) {

        }
};