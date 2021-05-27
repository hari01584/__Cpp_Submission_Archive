#include<iostream>
using namespace std;
class Matrix{
int *arr;
public:
	int r,c;
	Matrix(){}
	Matrix(const int r, const int c){
		this->r = r;
		this->c = c;
		arr = new int[r*c];
	}
	~Matrix(){
		delete [] arr;
	}
	int at(int x, int y) const {
		return arr[(c*x) + (y)];
	}
	void set(int x, int y, int sum){
		arr[(c*x) + (y)] = sum;
	}
	void fill(int *e){
		this->arr = e;
	}
	
	friend Matrix operator*(const Matrix& m1, const Matrix& m2);
};

Matrix operator*(const Matrix& m1, const Matrix& m2){
	int r = m1.r;
	int c = m1.c;
	Matrix res(m1.r, m2.c);
	for(int x=0;x<m1.r;x++){
		for(int y=0;y<m2.c;y++){
			int sum = 0;
			for(int p=0;p<m1.c;p++){
				sum+=m1.at(x, p)*m2.at(p, y);
			}
			res.set(x,y,sum);
		}
	}
	return res;
}

int main(){
	Matrix m1(3,2);
	int m1elem[6]= {2, 3,
					7, 8,
					1, 1};
	m1.fill(m1elem);

	Matrix m2(2,3);
	int m2elem[6]= {5, 1, 6,
					7, 8, 7};
	m2.fill(m2elem);
	
	Matrix m3 = m1*m2;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<m3.at(i,j)<<" ";
		}
		cout<<endl;
	}
	return 0;
}
