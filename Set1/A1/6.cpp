#include<iostream>
using namespace std;

class Student{
	string name;
	int roll;
	int marks;
	public:
	void setStudentData(string name, int roll, int marks){
		this->name = name;
		this->roll = roll;
		this->marks = marks;
	}
	
	void getStudentData(string *name, int *roll, int *marks){
		*name = this->name;
		*roll = this->roll;
		*marks = this->marks;
	}
};

int main(){
	Student students[3];
	for(int i=0;i<3;i++){
		cout<<"Student"<<i+1<<endl;
		string name;
		int roll;
		int marks;
		cout<<"Name:";
		cin>>name;
		cout<<"Roll:";
		cin>>roll;
		cout<<"Marks:";
		cin>>marks;
		
		students[i].setStudentData(name, roll, marks);
	}
	for(int i=0;i<3;i++){
		cout<<"Details for Student"<<i+1<<endl;
		string name;
		int roll;
		int marks;
		students[i].getStudentData(&name, &roll, &marks);
		cout<<"Name:"<<name<<endl;
		cout<<"Roll:"<<roll<<endl;
		cout<<"Marks:"<<marks<<endl;		
	}
}
