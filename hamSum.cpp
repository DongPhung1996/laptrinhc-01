#include <iostream>
#include <cmath>
using namespace std;

int hamHonHop(int a, int b, char c) {
	switch(c){
		case '+':
			return a + b;
			break;
		case '-':
			return a - b;
			break;
		case '*':
			return "a";
			break;
		case '/':
			return a / b;
			break;	
	}
}

main() {
	int x,y;
	char z;
	cin >> x >> y >> z;
	int kq = hamHonHop(x, y, z);
	cout << kq << endl;

}

