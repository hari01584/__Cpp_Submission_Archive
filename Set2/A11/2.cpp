#include<iostream>
using namespace std;

void callDivision(){
	int a1;
	int a2;
	cout<<"Welcome to division module!"<<endl;
	cout<<"Enter a1:";
	cin>>a1;
	cout<<"Enter a2:";
	cin>>a2;
	if(a2==0) throw 0;
	cout<<"Result:"<<a1/(float)a2<<endl;
}

void askForVote(){
	int age;
	cout<<"Welcome to votes module"<<endl;
	cout<<"Enter your age:";
	cin>>age;
	if(age<18) throw 18.0;
	
	cout<<"You can proceed to vote!!"<<endl;
}

void onlyAlpha(){
	string line;
	cout<<"Enter a line:"<<endl;
	cin.ignore();
	getline(cin, line);
	
	for(std::string::iterator it = line.begin(); it != line.end(); ++it) {
    	char c = *it;
    	if(!isalpha(c)){
    		throw "Non alpha";
		}
	}
	cout<<"Line contains all alphabetic character :)"<<endl;
	
}

int main(){
	try{
		//callDivision();
		//askForVote();
		onlyAlpha();
	}
	catch(int e){
		cout<<"Exception thrown, Division by "<<e;
	}
	catch(float e){
		cout<<"Exception thrown, Age less than 18, Can''t vote "<<e;
	}
	catch(char const* s){
		cout<<"Non alphabetical character's in string"<<endl;
	}
}
