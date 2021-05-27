#include<iostream>
using namespace std;

template<typename T1, typename T2>
void printerLarger(T1 a, T2 b){
	if(a>b){
		cout<<a<<" Is greater than "<<b<<endl;
	}
	else{
		cout<<b<<" Is greater than "<<a<<endl;
	}
}
int main(){
	int a = 5;
	int b = 7;
	printerLarger(a, b);
}
