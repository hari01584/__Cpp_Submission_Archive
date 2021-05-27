#include<iostream>
using namespace std;
class A{
public:
	void display(){
		cout<<"Main"<<endl;
	}
};
class B:public A{
public:
	void display(){
		// Overloaded the function for specific subclass based behavior
		// useful for like defining custom variables for derived class
		cout<<"Derived"<<endl;
	}
};

int main(){
	B b;
	b.display();
}
