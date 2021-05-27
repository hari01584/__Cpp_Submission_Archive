#include<iostream>
using namespace std;

class A{
	int x; // Private member variable
public:
	A(int x){
		this->x = x;
	}
	friend void callAx(A a);
	friend class B;
};
void callAx(A a){
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
	callAx(a);
	B b;
	b.show(a);
}

