#include<iostream>
using namespace std;
class AClass{
public:
	AClass operator-(){
		cout<<"Overloaded minus :D"<<endl;
		return *this;
	}
};

int main(){
	AClass a;
	-a;
}
