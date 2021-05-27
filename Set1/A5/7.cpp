#include<iostream>
using namespace std;

class A{
public:
	virtual void display(){
		cout<<"A"<<endl;
	}
};
class B:public A{
public:
	void display(){
		cout<<"B"<<endl; // Runtime polymorphism to show B!
	}
};

int main(){
	A* a = new B();
	a->display();
}
