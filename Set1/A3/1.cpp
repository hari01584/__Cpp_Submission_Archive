int main(){
	// Create dynamic pointer
	int *x = new int();
	// Delete
	delete x;
	
	// Create array of pointers;
	int *arr = new int[10];
	delete [] arr;
}
