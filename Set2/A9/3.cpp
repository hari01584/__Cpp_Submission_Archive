#include <iostream>
#include <fstream>
using namespace std;

class AClass{
public:
	int x = 20;
};

void writeBin(){
	ofstream fout;
	fout.open("AClass.bin", ios::binary);
	AClass aClass;
	aClass.x=40;
	fout.write((char *)(&aClass), sizeof(aClass));
	fout.close();
}

void readBin(){
	ifstream fin;
	fin.open("AClass.bin", ios::binary);
	AClass aClass;
	fin.read((char *)(&aClass), sizeof(aClass));
	
	cout<<aClass.x<<endl;
	fin.close();
}

int main(){
	writeBin();
	readBin();	
}
