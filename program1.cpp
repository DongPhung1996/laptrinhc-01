#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a;
	if (a > 0) {
		cout << "Nhap b: " << endl;
		cin >> b;
		if(b > 0) {
			cout << a + b;
		}
		else {
			cout << a - b;
		}
	} 
	else {
		cout << "Nhap c: " << endl;
		cin >> c;
		if(c > 0) {
			cout << a + c;
		}
		else {
			cout << a - c;
		}
	}
}
