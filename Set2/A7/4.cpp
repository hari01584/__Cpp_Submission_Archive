#include<iostream>
#include<string.h>
using namespace std;
class STRING{
public:
	string str;
	STRING(){}
	STRING(string str){
		this->str = str;
	}
	STRING operator+(const STRING& s){
		STRING res;
		res.str = this->str + s.str;
		return res;
	}
	bool operator==(const STRING& s){
		return s.str.compare(this->str) == 0;
	}
};

int main(){
	STRING s1("Hii");
	STRING s2("Hello");
	STRING s3("Hii");
	
	if(s1==s2) cout<<"S1 S2 are same"<<endl;
	else cout<<"S1 S2 Are different"<<endl;
	
	if(s1==s3) cout<<"S1 S3 are same"<<endl;
	else cout<<"S1 S3 Are different"<<endl;
	
	STRING sum = s1+s2;
	cout<<"Sum S1 and S2:"<<sum.str<<endl;
}
