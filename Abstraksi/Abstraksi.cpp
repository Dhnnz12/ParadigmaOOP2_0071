#include <iostream>
using namespace std;

class AbstraksiClass {
private: string x, y;

public:
	//method untuk mengisi nilai
	//private member
	void setXY(string a, string b) {
		x = a;
		y = b;
	}
    void display() {
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
};