#include <iostream>
#include <iomanip>
using namespace std;
class VISACard {
    protected:
        string type;
        double amount;

    private:
        int rewardPercentage;

    public:
        void computeRewardPoints() {
            float rewardPoints = amount * (rewardPercentage / 100.0);
            cout<<"Card details:"<<endl;
            cout<<"Type: "<<type<<endl;
            cout<<"Amount: "<<amount<<endl;
            cout<<fixed<<setprecision(1)<<"Reward point: "<<rewardPoints<<endl;
        }

    public:
        VISACard(string type1, double amount1, int rewardPercentage1) {
            type = type1;
            amount = amount1;
            rewardPercentage = rewardPercentage1;
        }
        VISACard(string type1, double amount1) {
            type = type1;
            amount = amount1;            
        }
        void setType (string type){
            this->type = type;
        }
        void setAmount (double amount){
            this->amount = amount;
        }
        void setRewardPercentage (int rewardPercentage){
            this->rewardPercentage = rewardPercentage;
        }
        int getRewardPercentage(){
            return rewardPercentage;
        }
        string getType(){
            return type;
        }
        double getAmount(){
            return amount;
        }
};
