#include <iostream>
using namespace std;
template<class T>
class LinkedList{
public:
	LinkedList *next;
	int data;
	LinkedList* pop(){
		LinkedList* n = next;
		data = n->data;
		LinkedList* nn = n->Next();
		next = nn;
		return nn;
	}
	void insert(LinkedList* t){
		next = t;
	}
	LinkedList* Next(){
		return next;
	}
};

void display(LinkedList<int> * obj){
	obj->pop();
	do{
		cout<<obj->data<<endl;
	}
	while((obj=obj->Next())!=NULL);
}

int main(){
	int a = 10;
	int b = 20;
	int c = 40;
	
	LinkedList<int>* a1 = new LinkedList<int>();
	a1->data = a;
	LinkedList<int>* b1 = new LinkedList<int>();
	b1->data = b;
	LinkedList<int>* c1 = new LinkedList<int>();
	c1->data = c;
	
	b1->insert(c1);
	a1->insert(b1);
	
	display(a1);
}
