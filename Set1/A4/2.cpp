class c{
	int x;
	int y;
public:
	c(){
		// Default
		x = 10;
		x = 20;
	}
	c(int x, int y){
		// Parameters
		this->x = x;
		this->y = y;
	}
	
	~c(){
		// Destructor
	}
};
int main() {
	c c1(); // Default call
	c c2(10,30); // Arg call
}
