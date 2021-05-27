#include<iostream>
using namespace std;

template<typename T1>
void swap(T1 *a, T1 *b){
	T1 c = *a;
	*a = *b;
	*b = c;
}
int main(){
	int a = 5;
	int b = 7;
	swap(a, b);
	cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
}
