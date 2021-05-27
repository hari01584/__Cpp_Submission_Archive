//TODO: Constructor overriding, idk how to do, not here
// A class having virtual functions to be filled by one of its derived class is called Abstract class!

#include<iostream>
using namespace std;

class A{
public:
	virtual ~A(){};
};
class B:public A{
public:
	~B(){
		cout<<"A destructor called in B"<<endl;
	}
};

int main(){
	A* a = new B();
	delete a;
}
