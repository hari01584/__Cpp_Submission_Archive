#include<iostream>
using namespace std;

class aclass{
public:
	int x;	
};

int main(){
	// Pointer
	aclass *obj = new aclass();
	obj->x = 10;
	cout<<obj->x<<endl;
	delete obj;
	
	aclass anotherObj;
	anotherObj.x = 20;
	cout<<anotherObj.x<<endl;
}
