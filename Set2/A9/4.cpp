#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string f1;
	string f2;
	cout<<"Enter f1(open):";
	cin>>f1;
	cout<<"Enter f2(paste):";
	cin>>f2;
	
	ifstream fin;
	ofstream fout;
	fin.open(f1.c_str());
	fout.open(f2.c_str());
	
	string line;
	while(fin){
		fout<<line;
		getline(fin, line);
	}
	
	fin.close();
	fout.close();
}
