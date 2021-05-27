#include<iostream>
using namespace std;

class A{
	int x; // Private member variable
public:
	A(int x){
		this->x = x;
	}
	friend void func1(A a);
	friend class B;
};
void func1(A a){
	// Friend function can access private members
	cout<<a.x<<endl;
}
class B{
public:
	void show(A a){
		// Friend function can access private members
		cout<<a.x<<endl;
	}
};
int main(){
	A a(10);
	func1(a);
	B b;
	b.show(a);
}
