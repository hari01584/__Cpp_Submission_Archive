#include<iostream>
using namespace std;
class Complex{
public:
	int real, imag;
	Complex(){}
	Complex(int r, int im){
		real = r;
		imag = im;
	}
	Complex operator+(const Complex& complex){
		Complex res;
		res.real = this->real + complex.real;
		res.imag = this->imag + complex.imag;
		return res;
	}
};

int main(){
	Complex c1(5,8);
	Complex c2(1,2);
	
	Complex sum = c1+c2;
	cout<<"Result:"<<sum.real<<"+i"<<sum.imag<<endl;
}
