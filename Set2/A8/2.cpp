#import<iostream>
using namespace std;

class Shapes{
public:
	virtual void display() = 0;
	virtual void calcArea() = 0;
};

class Rectangle: public Shapes{
	int l,b;
public:
	Rectangle(int l, int b){
		this->l = l;
		this->b = b;
	}
	void display(){
		cout<<"You are inside Rectangle!!"<<endl;
	}
	void calcArea(){
		cout<<"Calculated Area(Rectangle):"<<l*b<<endl;	
	}
};

class Circle: public Shapes{
	int r;
public:
	Circle(int r){
		this->r = r;
	}
	void display(){
		cout<<"You are inside Circle!!"<<endl;
	}
	void calcArea(){
		cout<<"Calculated Area(Circle):"<<3.14*r*r<<endl;	
	}
};

class Trapezoid: public Shapes{
	int a,b,h;
public:
	Trapezoid(int a, int b, int h){
		this->a = a;
		this->b = b;
		this->h = h;
	}
	void display(){
		cout<<"You are inside Trapezoid!!"<<endl;
	}
	void calcArea(){
		cout<<"Calculated Area(Trapezoid):"<<((a+b)*h)*0.5<<endl;	
	}
};

int main(){
	Shapes* rect = new Rectangle(10, 20);
	rect->display();
	rect->calcArea();
	
	Shapes* circ = new Circle(10);
	circ->display();
	circ->calcArea();
	
	Shapes* trap = new Trapezoid(10, 20, 30);
	trap->display();
	trap->calcArea();
}
