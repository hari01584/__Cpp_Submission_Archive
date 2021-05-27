#include<iostream>
using namespace std;

class A{
protected:
	int a = 20;
};
class B:public A{
public:
	void display(){
		cout<<A::a<<endl;
	}
};

int main(){
	B b;
	b.display();
}
