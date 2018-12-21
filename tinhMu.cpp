#include <iostream>
using namespace std;
int tinhMu(int so, int mu) {
	if(mu == 0)
		return 1;
	else
		return so * tinhMu(so, mu - 1);
}
int main() {
	int n, a;
	cin >> n >> a;
	int kq = tinhMu(n, a);
	cout << kq;
}
