namespace common{
	int x = 10;
	void changeX(int x){
		common::x = x;
	}
}
void anotherFunc(){
	common::changeX(20);
}
int main(){
	common::changeX(50);
	anotherFunc();
}
