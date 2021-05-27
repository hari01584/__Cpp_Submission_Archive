#include<iostream>
using namespace std;

template<typename T1>
T1 add(T1 a, T1 b){
	return a+b;
}
template<typename T1>
T1 subt(T1 a, T1 b){
	return a-b;
}
template<typename T1>
T1 multiply(T1 a, T1 b){
	return a*b;
}
template<typename T1>
T1 divide(T1 a, T1 b){
	return a/b;
}
int main(){
	int i;
	int a, b;
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
	cout<<"Welcome to menu of mathematics, Choose your operation"<<endl;
	cout<<"1.Add"<<endl;
	cout<<"2.Minus"<<endl;
	cout<<"3.Multiply"<<endl;
	cout<<"4.Divide"<<endl;
	cout<<"Enter option[1-4]:";
	cin>>i;
	
	switch(i){
		case 1:{
			cout<<"Result=>"<<add(a, b)<<endl;
			break;
		}
		case 2:{
			cout<<"Result=>"<<subt(a, b)<<endl;
			break;
		}
		case 3:{
			cout<<"Result=>"<<multiply(a, b)<<endl;
			break;
		}
		case 4:{
			cout<<"Result=>"<<divide(a, b)<<endl;
			break;
		}	
	}
}
