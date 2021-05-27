#include<iostream>
using namespace std;

void someFuncThrowException(int x){
	if(x==10) throw "X is 10";
}

int main(){
	try{
		someFuncThrowException(10);
	}
	catch(char const* es){
		cout<<"Exception thrown, Message:"<<es;
	}
}
