#include<iostream>
using namespace std;

class Complex{
public:
	float real;
	float imag;
	
	void setComplex (float real, float imag){
		this->real = real;
		this->imag = imag;
	}
	void displayComplex(){
		cout<<real<<"+i"<<imag<<endl;
	}
	Complex sum(Complex n1, Complex n2){
		Complex res;
		res.real = n1.real + n2.real;
		res.imag = n1.imag + n2.imag;
		return res;
	}
};

int main(){ 
	Complex n1;
	n1.setComplex(1, 2.5);
	Complex n2;
	n2.setComplex(1.5, 3);
	Complex res;
	res = res.sum(n1, n2);
	
	res.displayComplex();
}
