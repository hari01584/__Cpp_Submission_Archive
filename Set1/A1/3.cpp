#include<iostream>
using namespace std;

namespace n1{
	int x = 10;
}
namespace n2{
	int x = 20;
}

int main(){
	cout<<"n1.x="<<n1::x<<endl;
	cout<<"n2.x="<<n2::x<<endl;
}
