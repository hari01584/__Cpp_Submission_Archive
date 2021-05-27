#include<iostream>
using namespace std;
class FLOAT{
public:
	float f;
	FLOAT(){}
	FLOAT(float f){
		this->f=f;
	}
	FLOAT operator+(const FLOAT& a){
		FLOAT res;
		res.f = this->f + a.f;
		return res;
	}
	FLOAT operator-(const FLOAT& a){
		FLOAT res;
		res.f = this->f - a.f;
		return res;
	}
	FLOAT operator*(const FLOAT& a){
		FLOAT res;
		res.f = this->f * a.f;
		return res;
	}
	FLOAT operator/(const FLOAT& a){
		FLOAT res;
		res.f = this->f / a.f;
		return res;
	}
};

int main(){
	FLOAT f1(5.5);
	FLOAT f2(2.3);
	cout<<"Add:"<<(f1+f2).f<<endl;
	cout<<"Minus:"<<(f1-f2).f<<endl;
	cout<<"Multiply:"<<(f1*f2).f<<endl;
	cout<<"Divide:"<<(f1/f2).f<<endl;
}
