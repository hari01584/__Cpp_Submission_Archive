#include<iostream>
using namespace std;
class A{
public:
	int a=10;
};
class B: public A{
public:
	int b=20;
};
int main(){
	B b;
	cout<<b.b<<endl;
	cout<<b.a<<endl;
}
