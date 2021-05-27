#include<iostream>
using namespace std;
class MyClass{
public:
	int x;
	MyClass(){
		cout<<"Constructor Called"<<endl;
	}
	~MyClass(){
		cout<<"Destructor Called"<<endl;
	}
};
static MyClass obj;

void stat1(){
	// obj won't be removed since it's static
	obj.x = 50;
}

void stat2(){
	cout<< obj.x << endl;
}

int main(){
	stat1();
	// Now calling from another func:
	stat2();
}
