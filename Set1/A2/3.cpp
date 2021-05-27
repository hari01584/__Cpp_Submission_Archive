#include<iostream>

class myclass{
private:
	void func1();
public:
	const static int staticvar = 40;
};

void myclass::func1(){
	std::cout<<"func1 defined"<<std::endl;
}
int x = 10;

int main(){ 
	int x = 20;
	std::cout<<::x<<std::endl;
	
	std::cout<<myclass::staticvar<<std::endl;
}
