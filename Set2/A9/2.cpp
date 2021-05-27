#include<iostream>
#include <fstream>
using namespace std;

int count(string lin){
	int c=0;
	for(string::iterator it=lin.begin();it<lin.end(); it++){
		if(isalpha(*it)) c++;
	}
	return c;
}

int main(){
	ifstream fout;
  	int alp = 0;
    string line;
	fout.open("NOTES.txt");
	while (fout) {
        alp+=count(line);
        
		getline(fout, line);
    }
    cout<<"Total Chars:"<<alp<<endl;
	fout.close();
}
