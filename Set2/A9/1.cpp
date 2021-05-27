#include<iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream fout;
  
    string line;
	fout.open("NUM.txt");
	for(int i=0;i<200;i++)
		fout << i+1 << endl;
	fout.close();
}
