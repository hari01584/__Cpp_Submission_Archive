class c{
//	~othername(){
		// Gives error
//	}

//	~c(){
//		
//	}
//	~c(){
//		//Error again
//	}

//	~c(int x){
//		// Error: Destructors may not have parameters
//	}

//	~c(){
//		//Error: returning a value from a destructor
//		return 10;
//	}

	~c(){
		// Only this works
	}
};
int main() { }
