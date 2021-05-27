#import<iostream>
using namespace std;

class Student{
public:
	virtual void show() = 0;
};
class Engineering: public Student{
	void show(){
		cout<<"I am Engineering student"<<endl;
	}
};
class Medicine: public Student{
	void show(){
		cout<<"I am Medicine student"<<endl;
	}
};
class Science: public Student{
	void show(){
		cout<<"I am Science student"<<endl;
	}
};

int main(){
	Student* s1 = new Engineering();
	Student* s2 = new Medicine();
	Student* s3 = new Science();
	
	Student *arr[3] = {s1, s2, s3};
	
	for(int i=0;i<3;i++){
		arr[i]->show();
	}
}
