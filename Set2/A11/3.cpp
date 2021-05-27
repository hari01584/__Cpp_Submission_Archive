// TODO: Might need correction, on the part to rethrow exception

#include<iostream>
using namespace std;


class CustomException{
	
};

int main(){
	int x = 10;
	try{
		if(x==10) throw new CustomException();
	}
	catch(CustomException* c){
		cout<<"Find custom exception"<<endl;
		delete c;
	}
}
