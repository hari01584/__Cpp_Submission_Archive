#include <iostream>
#include <fstream>
using namespace std;


void writeString(string line){
	ofstream fout;
	fout.open("data.txt");
	fout<<line<<endl;
	fout.close();
	
	cout<<"Written line is "<<line<<endl;
}

void readString(){
	string line;
	ifstream fin;
	fin.open("data.txt");
	fin>>line;
	fin.close();
	
	cout<<"Read line is "<<line<<endl;
}

int main(){
	string str;
	cout<<"Enter string:"<<endl;

	getline(cin, str);
	cout<<"Length of string: "<<str.size()<<endl;
	writeString(str);	
	
	readString();
}
