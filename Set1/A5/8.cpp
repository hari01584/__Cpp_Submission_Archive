// A class having virtual functions to be filled by one of its derived class is called Abstract class!

#include<iostream>
using namespace std;

class A{
public:
	virtual void display() = 0;
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
