#include<iostream>
using namespace std;
class MyClass {
public:
  int data;
};
int main(){
	// Dynamic memory allocation
	// Using *new" with array sign [] to generate array of pointers;
	MyClass *x = new MyClass[5];
	// Setting data in pointer
	(x+1)->data = 10;
	// Output
	cout<< (x+1)->data <<endl;
	// Finally deallocate all (delete)
	delete [] x;
}
