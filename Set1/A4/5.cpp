#include<iostream>
using namespace std;

int main(){
	// Dynamic memory allocation
	// Using *new" keyword to generate pointer of object;
	int *x = new int();
	// Setting data in pointer
	*x = 10;
	// Output
	cout<< *x <<endl;
	// Finally deallocate(delete)
	delete x;
}
