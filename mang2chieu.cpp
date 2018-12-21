#include <iostream>

using namespace std;

int main(){
	int a[3][3];
	int s = 0, s1 = 0, s2 = 0;
	cout << "Nhap vao gia tri cua mang a: " << endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> a[i][j];
		}
	}
	cout << "Tong cac phan tu: " << endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(i == 0){
				s += a[i][j];
			}
			if(i == 1){
				s1 += a[i][j];
			}
			if(i == 2){
				s2 += a[i][j];
			}
		}
	}
	cout << s << endl << s1 << endl << s2;
}
