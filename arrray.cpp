#include <iostream>

using namespace std;

int main() {
	char arr[10];
	cout << "Nhap vao phan tu cua mang: " << endl;
	for(int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	cout << "Xuat cac phan tu cua mang: " << endl;
	int sum = 0;
	for(int i = 0; i < 10; i++) {
		cout << arr[i];
	}
}
