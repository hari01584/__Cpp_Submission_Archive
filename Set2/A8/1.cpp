#import<iostream>
using namespace std;

class Polygon{
protected:
	int width;
	int height;
public:
	void set_value(int w, int h){
		width = w;
		height = h;
	}
};

class Rectangle: public Polygon{
public:
	float calculate_area(){
		return width*height;
	}
};

class Triangle: public Polygon{
public:
	float calculate_area(){
		return 0.5*width*height;
	}
};


int main(){
	Polygon* pg = new Polygon();
	pg->set_value(20, 30);
	
	cout<<"Area(Rect):"<<((Rectangle*)pg)->calculate_area()<<endl;
	cout<<"Area(Tria):"<<((Triangle*)pg)->calculate_area()<<endl;
}
