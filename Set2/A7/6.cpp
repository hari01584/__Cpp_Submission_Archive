#include<iostream>
using namespace std;
class AClass{
public:
	friend istream& operator>> (istream &in, AClass const& c)
	{
		cout<<">> Used"<<endl;
    	return in;
	}
	friend ostream& operator<< (ostream &out, AClass const& c)
	{
		cout<<"<< Used"<<endl;
    	return out;
	}
};

int main(){
	AClass a;
	cin >> a;
}
