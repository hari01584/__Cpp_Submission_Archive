#include<iostream>

using namespace std;
class Try {
  public:
    Try() {
      // …constructor
    }

    ~Try() {
      // …destructor
    }
  void fun() {
    cout << "In function" << endl;
  }
};

int main() {
  Try * try1 = new Try();
  // … access fun() using try1 object
  try1 -> fun();
  Try try2;
  try2.fun();
  delete try1;

  Try * t = new Try[3];
  t[0].fun();
  // … more like this
  delete[] t;
  return 0;
}
